/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancourt <ancourt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 19:41:22 by ancourt           #+#    #+#             */
/*   Updated: 2025/11/29 15:47:55 by ancourt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*int	main(void)
{
	__builtin_printf("%d\n", ft_isprint('A'));
	__builtin_printf("%d\n", ft_isprint('-'));
	__builtin_printf("%d\n", ft_isprint('5'));
	__builtin_printf("%d\n", ft_isprint('u'));
	return(0);
}*/
