/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancourt <ancourt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 19:33:41 by ancourt           #+#    #+#             */
/*   Updated: 2025/11/29 15:48:09 by ancourt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*int	main(void)
{
	__builtin_printf("%d\n", ft_isascii('A'));
	__builtin_printf("%d\n", ft_isascii('-'));
	__builtin_printf("%d\n", ft_isascii('5'));
	__builtin_printf("%d\n", ft_isascii('u'));
	return(0);
}*/