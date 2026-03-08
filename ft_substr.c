/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigarcia <gigarcia@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 01:59:15 by gigarcia          #+#    #+#             */
/*   Updated: 2026/02/13 23:21:40 by gigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		s_len;
	char		*buff;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len || !len)
		return (ft_strdup(""));
	if ((s_len - start) < len)
		len = s_len - start;
	buff = malloc(sizeof(char) * (len + 1));
	if (!buff)
		return (NULL);
	ft_memcpy(buff, &s[start], len);
	buff[len] = '\0';
	return (buff);
}
