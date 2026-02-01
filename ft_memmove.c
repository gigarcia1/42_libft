/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigarcia <gigarcia@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 00:35:48 by gigarcia          #+#    #+#             */
/*   Updated: 2026/02/01 01:58:27 by gigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp_dest;
	unsigned char	*tmp_src;

	tmp_dest = (unsigned char *)dest;
	tmp_src = (unsigned char *)src;
	if (!n || !src || !dest)
		return (dest);
	if (tmp_dest <= tmp_src)
	{
		while (n--)
			*tmp_dest++ = *tmp_src++;
	}
	else
	{
		tmp_src += n - 1;
		tmp_dest += n - 1;
		while (n--)
			*tmp_dest-- = *tmp_src--;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Tu prototipo
void	*ft_memmove(void *dest, const void *src, size_t n);

// Colores
#define GREEN "\033[0;32m"
#define RED "\033[0;31m"
#define RESET "\033[0m"

void	check_result(char *desc, void *full_buf_ft, 

	***************************************
	//QUITAR ESPACIOvoid *full_buf_std, size_t size)
{
	// Solo comparamos el contenido de la memoria, que es lo vital
	if (memcmp(full_buf_ft, full_buf_std, size) == 0)
	{
		printf("%s: %s[OK]%s\n", desc, GREEN, RESET);
	}
	else
	{
		printf("%s: %s[KO]%s\n", desc, RED, RESET);
		// Imprimimoa para ver qué pasó (asumiendo que son chars visibles)
		printf("   Esperado (std): [%s]\n", (char *)full_buf_std);
		printf("   Obtenido (ft_) : [%s]\n", (char *)full_buf_ft);
	}
}

int	main(void)
{
	printf("\n--- TESTER FT_MEMMOVE ---\n\n");

	// CASO 1: SIN SOLAPAMIENTO
	char	str1_std[] = "0123456789";
	char	str1_ft[]  = "0123456789";
	
	memmove(str1_std + 3, str1_std, 5);
	ft_memmove(str1_ft + 3, str1_ft, 5);
	
	check_result("1. Sin Solapamiento", str1_ft, str1_std, 10);


	// CASO 2: SOLAPAMIENTO FORWARD (dest < src)
	char	str2_std[] = "0123456789";
	char	str2_ft[]  = "0123456789";

	memmove(str2_std + 1, str2_std + 3, 5); 
	ft_memmove(str2_ft + 1, str2_ft + 3, 5);

	check_result("2. Overlap Forward", str2_ft, str2_std, 10);


	// CASO 3: SOLAPAMIENTO BACKWARD (dest > src) -> EL DIFÍCIL
	char	str3_std[] = "0123456789";
	char	str3_ft[]  = "0123456789";

	memmove(str3_std + 2, str3_std, 5);
	ft_memmove(str3_ft + 2, str3_ft, 5);

	check_result("3. Overlap Backward", str3_ft, str3_std, 10);


	// CASO 4: n = 0
	char	str4_std[] = "ABCDE";
	char	str4_ft[]  = "ABCDE";

	ft_memmove(str4_ft + 1, str4_ft, 0);
	memmove(str4_std + 1, str4_std, 0);

	check_result("4. Size n = 0", str4_ft, str4_std, 5);


	// CASO 5: RETURN VALUE CHECK (Básico)
	// Verificamos que devuelva el puntero dest
	char	ret_test[] = "TEST";
	if (ft_memmove(ret_test, "A", 1) == ret_test)
		printf("5. Return Value: %s[OK]%s\n", GREEN, RESET);
	else
		printf("5. Return Value: %s[KO]%s (No devolvió dest)\n", RED, RESET);

	// CASO 6: INTS
	int arr_std[] = {1, 2, 3, 4, 5, 6, 7};
	int arr_ft[]  = {1, 2, 3, 4, 5, 6, 7};

	ft_memmove(arr_ft + 2, arr_ft, 3 * sizeof(int));
	memmove(arr_std + 2, arr_std, 3 * sizeof(int));

	check_result("6. Array de Ints", arr_ft, arr_std, 7 * sizeof(int));

	printf("\n");
	return (0);
}
*/
