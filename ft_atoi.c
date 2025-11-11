/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancourt <ancourt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 20:32:33 by ancourt           #+#    #+#             */
/*   Updated: 2025/11/11 17:55:42 by ancourt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	result = 0;
	sign = 1;
	while (nptr[i] == ' ' || (nptr[i] >= '\t' && nptr[i] <= '\r'))
		i++;
	while (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -sign;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}

/*int	main(void)
{
	char	nptr[] = "	------4";
	char	nptr1[] = "-2147483648";
	char	nptr2[] = "21474q83648";
	char	nptr3[] = "Q2147483647";
	char	nptr4[] = "-4wadw";
	char	nptr5[] = "--45";

	__builtin_printf("%d\n", ft_atoi(nptr));
	__builtin_printf("%d\n", ft_atoi(nptr1));
	__builtin_printf("%d\n", ft_atoi(nptr2));
	__builtin_printf("%d\n", ft_atoi(nptr3));
	__builtin_printf("%d\n", ft_atoi(nptr4));
	__builtin_printf("%d\n", ft_atoi(nptr5));
	return (0);
}*/