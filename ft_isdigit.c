/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancourt <ancourt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 19:37:29 by ancourt           #+#    #+#             */
/*   Updated: 2025/11/07 19:41:16 by ancourt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*int	main(void)
{
	__builtin_printf("%d\n", ft_isdigit('A'));
	__builtin_printf("%d\n", ft_isdigit('-'));
	__builtin_printf("%d\n", ft_isdigit('5'));
	__builtin_printf("%d\n", ft_isdigit('u'));
	return(0);
}*/