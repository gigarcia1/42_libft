/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigarcia <gigarcia@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 19:15:06 by gigarcia          #+#    #+#             */
/*   Updated: 2026/01/31 22:15:31 by gigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*buffer;

	if (!nmemb || !size)
		return (NULL);

	buffer = malloc(size * nmemb);
	if (!buffer)
		return (NULL);

	return((void *)ft_memset(buffer, 0, size * nmemb);

	//ask about overflow
	//nmemb > (overflow / size)

}
