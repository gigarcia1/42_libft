/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigarcia <gigarcia@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 06:21:36 by gigarcia          #+#    #+#             */
/*   Updated: 2026/02/01 07:50:21 by gigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_in_set(char c, char *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*start;
	char	*end;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	start = (char *)s1;
	len = ft_strlen(s1);
	while (*start && is_in_set(*start, (char *)set))
		start++;
	if (!*start)
	   return (ft_strdup(""));//toda la cadena s1 son caracteres contenidos en charset. e.g. "----", '-'
	end = (char *)s1 + len; //end se inicializa en el '\0'. no usamos el -1 para evitar comportamientos
				//indefinidos si len = 0 (s1 es una cadena con solo un \0);
	while (start < end && (is_in_set(*(end - 1), (char *)set)))
			end--;		     
	return (ft_substr(s1, (unsigned int)(start - s1), (end - start)));
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Asegúrate de compilar esto con tu ft_strtrim.c y las funciones que use (ft_substr, etc.)
char *ft_strtrim(char const *s1, char const *set);

void test_trim(char *test_name, char const *s1, char const *set, char const *expected)
{
    char *res = ft_strtrim(s1, set);
    
    printf("TEST: %s\n", test_name);
    printf("  s1      : [%s]\n", s1 ? s1 : "NULL");
    printf("  set     : [%s]\n", set ? set : "NULL");
    printf("  Resultado: [%s]\n", res ? res : "NULL");
    printf("  Esperado : [%s]\n", expected ? expected : "NULL");
    
    if ((res && expected && strcmp(res, expected) == 0) || (res == expected))
        printf("  STATUS   : ✅ OK\n");
    else
        printf("  STATUS   : ❌ FAIL\n");
    printf("--------------------------------------\n");
    free(res);
}

int main(void)
{
    printf("--- INICIANDO TEST DE FT_STRTRIM ---\n\n");

    // 1. Caso Estándar
    test_trim("Básico", "  hola mundo  ", " ", "hola mundo");

    // 2. Trim solo por un lado
    test_trim("Solo inicio", "---hola", "-", "hola");
    test_trim("Solo final", "hola???", "?", "hola");

    // 3. Set vacío (debe devolver una copia de s1 intacta)
    test_trim("Set vacío", "no me cortes", "", "no me cortes");

    // 4. s1 vacío (debe devolver una copia de "" mallocada)
    test_trim("s1 vacío", "", "abc", "");

    // 5. Toda la cadena s1 está en el set
    test_trim("Todo para borrar", "aaaaa", "a", "");
    test_trim("Mezcla de set completa", ".-.-.--.", ".-", "");

    // 6. Set con caracteres que no están en s1
    test_trim("Set inexistente", "hola", "xyz", "hola");

    // 7. Caracteres del set en medio de la cadena (NO deben borrarse)
    test_trim("Set en el medio", "111hola111mundo111", "1", "hola111mundo");

    // 8. Protecciones contra NULL
    test_trim("s1 es NULL", NULL, "abc", NULL);
    test_trim("set es NULL", "hola", NULL, NULL);

    return (0);
}
*/
