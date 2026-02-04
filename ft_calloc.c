/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc_INCOMPLETE.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigarcia <gigarcia@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 19:15:06 by gigarcia          #+#    #+#             */
/*   Updated: 2026/02/04 02:44:03 by gigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*buffer;

	if (size && nmemb > SIZE_MAX / size)
		return (NULL);
	buffer = malloc(nmemb * size);
	if (!buffer)
		return (NULL);
	ft_memset(buffer, 0, size * nmemb);
	return (buffer);
}
// malloc(0), ya que el return debe ser un puntero único que luego
// pueda ser liberado por free(), en sistemas y arquitecturas actuales,
// malloc devuelve un puntero válido a un bloque de solo lectura pequeño.
// Esto para garantizar que malloc devuelva cada vez una dirección distinta
// y así evitar devolver NULL, evitando errores de lógica en sistemas que asumen
// que malloc devuelve NULL porque hubo un error de memoria (crash)
