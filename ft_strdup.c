/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigarcia <gigarcia@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 22:33:20 by gigarcia          #+#    #+#             */
/*   Updated: 2026/02/13 23:11:24 by gigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*buf;
	size_t	len;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	buf = malloc(sizeof(char) * (len + 1));
	if (!buf)
		return (NULL);
	return (ft_memcpy(buf, s, len), buf[len] = '\0', buf);
}
