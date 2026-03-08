/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigarcia <gigarcia@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 07:51:02 by gigarcia          #+#    #+#             */
/*   Updated: 2026/02/13 23:06:15 by gigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	int	digits;

	digits = 0;
	if (n < 0)
		n *= -1;
	while (n > 0)
	{
		n /= 10;
		digits++;
	}
	return (digits);
}

char	*ft_itoa(int n)
{
	char	*buf;
	int		len;

	len = 0;
	if (n == 0)
		return (ft_strdup("0"));
	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	len += count_digits(n);
	if (n < 0)
		len += 1;
	buf = malloc(sizeof(char) * (len + 1));
	if (!buf)
		return (NULL);
	buf[0] = '-';
	if (n < 0)
		n *= -1;
	buf[len] = '\0';
	while (n > 0)
	{
		len--;
		buf[len] = (n % 10) + '0';
		n /= 10;
	}
	return (buf);
}
/*
int main()
{
	printf("%s\n", ft_itoa(5));
	printf("%s\n", ft_itoa(-5));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(5456));
	printf("%s\n", ft_itoa(-461));
}*/
