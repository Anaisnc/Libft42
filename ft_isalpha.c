/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancourt <ancourt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 19:02:01 by ancourt           #+#    #+#             */
/*   Updated: 2025/11/25 16:50:23 by ancourt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
/*int	main(void)
{
	__builtin_printf("%d\n", ft_isalpha('A'));
	__builtin_printf("%d\n", ft_isalpha('-'));
	__builtin_printf("%d\n", ft_isalpha('5'));
	__builtin_printf("%d\n", ft_isalpha('u'));
	return(0);
}*/