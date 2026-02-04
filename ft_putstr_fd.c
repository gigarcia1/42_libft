/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigarcia <gigarcia@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 04:55:05 by gigarcia          #+#    #+#             */
/*   Updated: 2026/02/04 05:11:56 by gigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s && fd >= 0)
		write(fd, s, ft_strlen(s));
}
/*
int	main(void)
{
	char *mensaje = "Hola, 42 Madrid!";
	char *error = "¡Algo ha salido mal!";

	// Escribir en la terminal (Salida estándar)
	ft_putstr_fd(mensaje, 1);
	ft_putchar_fd('\n', 1);

	// Escribir en la terminal (Salida de error)
	ft_putstr_fd(error, 2);
	ft_putchar_fd('\n', 2);

	return (0);
}*/
