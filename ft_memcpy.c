/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigarcia <gigarcia@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 19:01:46 by gigarcia          #+#    #+#             */
/*   Updated: 2026/02/14 00:33:22 by gigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char		*tmp_src;
	unsigned char	*tmp_dest;

	if (!src && !dest)
		return (NULL);
	tmp_src = (const char *)src;
	tmp_dest = (unsigned char *)dest;
	while (n > 0)
	{
		*tmp_dest++ = *tmp_src++;
		n--;
	}
	return (dest);
}
/*
int main ()
{
	int arr[] = {0, 1, 2, 3, 4, 5};
	int *buffer = malloc(sizeof(int) * 6);

	buffer = ft_memcpy(buffer, arr, sizeof(int) * 6);

	for (int i = 0; i < 6; i++)
	{
		printf("%d ", buffer[i]);
	}
	free(buffer);
}*/
