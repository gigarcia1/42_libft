/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigarcia <gigarcia@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 01:59:15 by gigarcia          #+#    #+#             */
/*   Updated: 2026/02/01 05:58:29 by gigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		s_len;
	char		*buff;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len || !len)
		return (ft_strdup(""));
	if ((s_len - start) < len)
		len = s_len - start;
	buff = malloc(sizeof(char) * (len + 1));
	if (!buff)
		return (NULL);
	ft_memcpy(buff, &s[start], len);
	buff[len] = '\0';
	return (buff);
}
/*
#include <stdio.h>
#include <stdlib.h>

// Prototipo de tu función
char *ft_substr(char const *s, unsigned int start, size_t len);

int main(void)
{
    char    *res;
    char    *str = "0123456789";

    printf("--- TEST FT_SUBSTR ---\n\n");

    // TEST 1: Caso normal
    res = ft_substr(str, 2, 3);
    printf("Test 1 (Normal): '%s' | Esperado: '234'\n", res);
    free(res);

    // TEST 2: Start al límite
    res = ft_substr(str, 9, 5);
    printf("Test 2 (Final):  '%s' | Esperado: '9'\n", res);
    free(res);

    // TEST 3: Start fuera de rango
    res = ft_substr(str, 15, 5);
    printf("Test 3 (Fuera):  '%s' | Esperado: '' (vacío)\n", res);
    free(res);

    // TEST 4: Len mayor que lo disponible
    res = ft_substr(str, 5, 20);
    printf("Test 4 (Exceso): '%s' | Esperado: '56789'\n", res);
    free(res);

    // TEST 5: Len 0
    res = ft_substr(str, 2, 0);
    printf("Test 5 (Len 0):  '%s' | Esperado: '' (vacío)\n", res);
    free(res);

    return (0);
}
*/
