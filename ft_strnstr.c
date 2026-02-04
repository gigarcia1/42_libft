/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigarcia <gigarcia@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 08:52:01 by gigarcia          #+#    #+#             */
/*   Updated: 2026/02/04 03:15:38 by gigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*tmp_big;

	tmp_big = (char *)big;
	if (!*little)
		return (tmp_big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while ((i + j) < len && big[i + j] == little[j])
		{
			if (!little[j + 1])
				return (tmp_big + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
