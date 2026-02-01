/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigarcia <gigarcia@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 22:33:20 by gigarcia          #+#    #+#             */
/*   Updated: 2026/02/01 05:55:31 by gigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
	char	*buf;
	size_t	len;
	
	if (!s)
		return (NULL);
	len = ft_strlen(s);
	buf = malloc(sizeof(char) * (len + 1));
	if (!buf)
		return (NULL);
	return (ft_memcpy(buf, s, len), buf[len] = '\0', buf);		
}

/*

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Prototypes
size_t  ft_strlen(const char *s);
char    *ft_strcpy(char *dest, const char *src);
void    *ft_memcpy(void *dest, const void *src, size_t n);
char    *ft_strdup(const char *s);

int main(void)
{
    printf("--- STARTING FT_STRDUP TESTS ---\n\n");

    // --- TEST 1: Standard String ---
    {
        const char *orig = "Hello World";
        char *dup = ft_strdup(orig);
        
        printf("Test 1 (Standard): ");
        if (dup && strcmp(orig, dup) == 0 && dup != orig)
            printf("✅ PASS (Content: \"%s\", Addr: %p)\n", dup, (void*)dup);
        else
            printf("❌ FAIL\n");
        free(dup);
    }

    // --- TEST 2: Empty String ---
    {
        const char *orig = "";
        char *dup = ft_strdup(orig);
        
        printf("Test 2 (Empty):    ");
        if (dup && strcmp(orig, dup) == 0)
            printf("✅ PASS (Content: \"%s\")\n", dup);
        else
            printf("❌ FAIL\n");
        free(dup);
    }

    // --- TEST 3: Long String ---
    {
        const char *orig = "This is a much longer string to test if malloc and memcpy handle size correctly.";
        char *dup = ft_strdup(orig);
        
        printf("Test 3 (Long):     ");
        if (dup && strcmp(orig, dup) == 0)
            printf("✅ PASS\n");
        else
            printf("❌ FAIL\n");
        free(dup);
    }

    // --- TEST 4: NULL Input (The Segfault Fix) ---
    {
        printf("Test 4 (NULL):     ");
        
        // We do NOT call strcmp here because strcmp(NULL, NULL) segfaults.
        // We only check if your function returns NULL as intended.
        char *dup = ft_strdup(NULL);
        
        if (dup == NULL)
            printf("✅ PASS (Safely returned NULL)\n");
        else
        {
            printf("❌ FAIL (Did not return NULL for NULL input)\n");
            free(dup);
        }
    }

    printf("\n--- TESTS COMPLETE ---\n");
    return (0);
}
*/
