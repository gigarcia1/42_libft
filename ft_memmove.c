/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigarcia <gigarcia@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 00:35:48 by gigarcia          #+#    #+#             */
/*   Updated: 2026/02/14 00:49:11 by gigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp_dest;
	unsigned char	*tmp_src;

	if (!src && !dest)
		return (NULL);
	tmp_dest = (unsigned char *)dest;
	tmp_src = (unsigned char *)src;
	if (dest <= src)
	{
		while (n--)
			*tmp_dest++ = *tmp_src++;
	}
	else
	{
		tmp_src += n - 1;
		tmp_dest += n - 1;
		while (n--)
			*tmp_dest-- = *tmp_src--;
	}
	return (dest);
}
