/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancourt <ancourt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 14:43:21 by ancourt           #+#    #+#             */
/*   Updated: 2025/11/29 17:39:00 by ancourt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_digits(int n)
{
	size_t	count;

	if (n == 0)
		return (1);
	count = 0;
	if (n < 0)
		count++;
	while (n)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long	nb;
	char	*res;
	size_t	len;

	len = ft_digits(n);
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (0);
	nb = n;
	if (n < 0)
		nb = -nb;
	res[len] = '\0';
	while (len-- > 0)
	{
		res[len] = (nb % 10) + '0';
		nb = nb / 10;
		if (n < 0 && len == 0)
			res[len] = '-';
	}
	return (res);
}
/*int	main(void)
{
	__builtin_printf("ft_digit : %zu\n", ft_digits(1234));
	__builtin_printf("ft_itoa : %s\n", ft_itoa(123));
	__builtin_printf("ft_itoa : %s\n", ft_itoa(-123));
	__builtin_printf("ft_itoa : %s\n", ft_itoa(-1236666));
	__builtin_printf("ft_itoa : %s\n", ft_itoa(-2147483648));
	return (0);
}*/