/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigarcia <gigarcia@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 05:59:38 by gigarcia          #+#    #+#             */
/*   Updated: 2026/02/13 23:18:54 by gigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*buff;
	size_t	s1_len;
	size_t	s2_len;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	buff = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!buff)
		return (NULL);
	ft_memcpy(buff, s1, s1_len);
	ft_memcpy(&buff[s1_len], s2, s2_len);
	buff[s1_len + s2_len] = '\0';
	return (buff);
}
