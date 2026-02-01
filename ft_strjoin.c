/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigarcia <gigarcia@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 05:59:38 by gigarcia          #+#    #+#             */
/*   Updated: 2026/02/01 06:20:19 by gigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*buff;
	size_t	s1_len;
	size_t	s2_len;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	buff = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!buff)
		return (NULL);
	ft_memcpy(buff, s1, s1_len);
	ft_memcpy(&buff[s1_len], s2, s2_len);
	buff[s1_len + s2_len] = '\0';
	return (buff);
}
/*
#include <stdio.h>
#include <stdlib.h>

// Prototipo de tu función
char *ft_strjoin(char const *s1, char const *s2);

int main(void)
{
    char    *res;

    printf("--- TEST FT_STRJOIN: CASOS BORDE ---\n\n");

    // CASO 1: Cadenas vacías (pero existentes)
    // El resultado debe ser una cadena vacía "" asignada con malloc.
    res = ft_strjoin("", "");
    printf("Test 1 (Ambas vacías):   \"%s\" | Esperado: \"\"\n", res);
    free(res);

    // CASO 2: Primera cadena vacía
    res = ft_strjoin("", "42");
    printf("Test 2 (s1 vacía):       \"%s\" | Esperado: \"42\"\n", res);
    free(res);

    // CASO 3: Segunda cadena vacía
    res = ft_strjoin("Madrid", "");
    printf("Test 3 (s2 vacía):       \"%s\" | Esperado: \"Madrid\"\n", res);
    free(res);

    // CASO 4: Cadenas con espacios
    res = ft_strjoin("Hola ", "Mundo");
    printf("Test 4 (Con espacios):   \"%s\" | Esperado: \"Hola Mundo\"\n", res);
    free(res);

    // CASO 5: Protección NULL (Súper importante en 42)
    // Según tu implementación actual, esto debería devolver NULL.
    printf("Test5 (s1 es NULL): %s|Espera:(null)\n", ft_strjoin(NULL, "42"));
    printf("Test6 (s2 es NULL): %s|Espera:(null)\n", ft_strjoin("42", NULL));

    return (0);
}*/
