/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancourt <ancourt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 18:58:16 by ancourt           #+#    #+#             */
/*   Updated: 2025/11/07 19:38:37 by ancourt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) || (c >= '0'
			&& c <= '9'))
		return (1);
	return (0);
}

/*int	main(void)
{
	__builtin_printf("%d\n", ft_isalnum('A'));
	__builtin_printf("%d\n", ft_isalnum('-'));
	__builtin_printf("%d\n", ft_isalnum('5'));
	__builtin_printf("%d\n", ft_isalnum('u'));
	return(0);
}*/