/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bubble_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigarcia <gigarcia@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 09:29:10 by gigarcia          #+#    #+#             */
/*   Updated: 2026/04/26 09:30:24 by gigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bubble_sort(int *arr, int size)
{
	int	i;

	i = 1;
	while (i < size)
	{
		if (arr[i - 1] > arr[i])
		{
			ft_swap(&arr[i - 1], &arr[i]);
			i = 0;
		}
		i++;
	}
}
