/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigarcia <gigarcia@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 05:16:22 by gigarcia          #+#    #+#             */
/*   Updated: 2026/02/04 05:25:22 by gigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (fd < 0)
		return ;
	if (n == INT_MIN)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	ft_putchar_fd((n % 10) + '0', fd);
}
/*
#include "libft.h"
#include <limits.h>
#include <stdio.h>

int main(void)
{
	printf("--- Test ft_putnbr_fd ---\n");

	write(1, "Positivo (42): ", 15);
	ft_putnbr_fd(42, 1);
	write(1, "\n", 1);

	write(1, "Negativo (-42): ", 16);
	ft_putnbr_fd(-42, 1);
	write(1, "\n", 1);

	write(1, "Cero (0): ", 10);
	ft_putnbr_fd(0, 1);
	write(1, "\n", 1);

	write(1, "INT_MIN: ", 9);
	ft_putnbr_fd(INT_MIN, 1); // El test de fuego
	write(1, "\n", 1);

	return (0);
}*/
