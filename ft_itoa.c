/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancourt <ancourt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 14:43:21 by ancourt           #+#    #+#             */
/*   Updated: 2025/11/19 18:05:28 by ancourt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//fonction pour connaitre le nombre de digits dans n
int	ft_digits(int n)
{
	size_t i;
	size_t count;

	
	i = 0;
	count = 0;
	while (n)
	{
		n = n / 10;
		count++;
	}
	return (count);
}


char	*ft_itoa(int n)
{
	char *res;
	size_t i;

	i = 0;
	res = malloc(sizeof(char) * (ft_digits(n) + 1));
	if (!res)
		return (0);
	if (n == -2147483648)
	{
		res = "-2147483648";
		return (res);
	}
	else if (n < 0)
		ft_itoa(n * (-1));
	else if (n >= 0 && n <= 9)
		res[i++] = n + '0';
	else
	{
		ft_itoa(n / 10);
		ft_itoa(n % 10);
	}
	res[i] = '\0';
	return (res);
}
int	main(void)
{
	__builtin_printf("ft_digit : %d\n", ft_digits(1234));
	__builtin_printf("ft_itoa : %s\n", ft_itoa(12));
	return(0);
}