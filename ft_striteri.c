/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigarcia <gigarcia@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 04:07:41 by gigarcia          #+#    #+#             */
/*   Updated: 2026/02/04 04:30:11 by gigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	ft_aux(unsigned int i, char *s)
{
	if (i % 2 == 0 && (*s >= 'a' && *s <= 'z'))
		*s -= 32;
}

int main ()
{
	char	str[] = "Holaaaaaaaa";
	
	ft_striteri(str, ft_aux);
	printf("%s\n", str);
}*/
