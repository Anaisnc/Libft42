/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancourt <ancourt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 20:32:33 by ancourt           #+#    #+#             */
/*   Updated: 2025/11/07 20:35:50 by ancourt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancourt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 15:48:23 by ancourt           #+#    #+#             */
/*   Updated: 2025/08/28 08:31:23 by ancourt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r' ))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

int	main(void)
{
	char	str[] = "	------4";
	char	str1[] = "-2147483648";
	char	str2[] = "21474q83648";
	char	str3[] = "Q2147483647";
	char	str4[] = "-4wadw";
	char	str5[] = "--45";
	
	__builtin_printf("%d\n", ft_atoi(str));
	__builtin_printf("%d\n", ft_atoi(str1));
	__builtin_printf("%d\n", ft_atoi(str2));
	__builtin_printf("%d\n", ft_atoi(str3));
	__builtin_printf("%d\n", ft_atoi(str4));
	__builtin_printf("%d\n", ft_atoi(str5));
	return (0);
}
