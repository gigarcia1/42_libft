/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigarcia <gigarcia@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 05:02:40 by gigarcia          #+#    #+#             */
/*   Updated: 2026/02/04 05:11:40 by gigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s && fd >= 0)
	{
		ft_putstr_fd(s, fd);
		ft_putchar_fd('\n', fd);
	}
}
/*
#include "libft.h"
#include <fcntl.h> // Para poder crear un archivo real si quieres

int	main(void)
{
	// Caso 1: Escribir en la salida estándar (Terminal)
	// Verás que el cursor baja a la siguiente línea automáticamente
	ft_putendl_fd("Hola, este es un test en stdout", 1);
	ft_putendl_fd("Esta es la segunda linea", 1);

	// Caso 2: Escribir en la salida de error
	ft_putendl_fd("Este es un mensaje de error en stderr", 2);

	// Caso 3: Caso borde - Puntero NULL
	// Tu función debería simplemente no hacer nada (gracias a tu protección)
	ft_putendl_fd(NULL, 1);

	// Caso 4: Escribir en un archivo real (Opcional, muy pro)
	int fd = open("test_output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd != -1)
	{
		ft_putendl_fd("Esto se ha guardado en un archivo!", fd);
		close(fd);
		ft_putstr_fd("Hecho! Revisa el archivo 'test_output.txt'\n", 1);
	}

	return (0);
}*/
