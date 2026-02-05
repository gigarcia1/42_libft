#include "libft.h"

static void	free_arr(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

static int	count_words(const char *s, char c)
{
	int	flag;
	int	count;

	flag = 1;
	count = 0;
	while (*s)
	{
		if (*s != c && flag == 1)
		{
			count++;
			flag = 0;
		}
		else if (*s == c)
			flag = 1;
		s++;
	}
	return (count);
}

static char	**fill_words(char **arr, const char *s, char c, int word_count)
{
	char		**tmp_arr;
	const char	*tmp_s;
	int			i;

	i = 0;
	tmp_arr = arr;
	tmp_s = s;
	tmp_arr[word_count] = NULL;
	while (i < word_count)
	{
		while (*tmp_s && *tmp_s == c)
			tmp_s++;
		s = tmp_s;
		while (*tmp_s && (*tmp_s != c))
			tmp_s++;
		tmp_arr[i] = ft_substr(s, 0, (tmp_s - s));
		if (!tmp_arr[i])
			return (free_arr(arr), NULL);
		s = tmp_s;
		i++;
	}
	return (arr);
}

char	**ft_split(const char *s, char c)
{
	char	**arr;
	int		word_count;

	word_count = count_words(s, c);
	arr = malloc(sizeof(char *) * (word_count + 1));
	if (!arr)
		return (NULL);
	return (fill_words(arr, s, c, word_count));
}
