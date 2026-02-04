/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigarcia <gigarcia@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 04:31:08 by gigarcia          #+#    #+#             */
/*   Updated: 2026/02/04 04:54:27 by gigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd >= 0)
		write(fd, &c, 1);
}
/*
#include "libft.h"

int	main(void)
{
	// Escribimos 'A' en la salida estándar (terminal)
	ft_putchar_fd('A', 1);
	
	// Escribimos un salto de línea
	ft_putchar_fd('\n', 1);
	
	return (0);
}*/
