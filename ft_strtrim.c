/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigarcia <gigarcia@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 06:21:36 by gigarcia          #+#    #+#             */
/*   Updated: 2026/02/13 23:07:43 by gigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, char *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*start;
	char	*end;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	start = (char *)s1;
	len = ft_strlen(s1);
	while (*start && is_in_set(*start, (char *)set))
		start++;
	if (!*start)
		return (ft_strdup(""));
	end = (char *)s1 + len;
	while (start < end && (is_in_set(*(end - 1), (char *)set)))
		end--;
	return (ft_substr(s1, (unsigned int)(start - s1), (end - start)));
}
