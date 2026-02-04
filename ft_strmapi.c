/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigarcia <gigarcia@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 03:17:23 by gigarcia          #+#    #+#             */
/*   Updated: 2026/02/04 04:07:10 by gigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*buffer;

	if (!s || !f)
		return (NULL);
	buffer = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!buffer)
		return (NULL);
	i = 0;
	while (s[i])
	{
		buffer[i] = f(i, s[i]);
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}
/*
char	ft_aux(unsigned int i, char c)
{
	if (i % 2 == 0 && c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int main()
{
	char	*str = "Holaaaaaaaaaaa";
	char	*str2;

	str2 = ft_strmapi(str, ft_aux);
	printf("%s\n", str2);

	free(str2);
}*/
