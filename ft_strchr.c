/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancourt <ancourt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:59:53 by ancourt           #+#    #+#             */
/*   Updated: 2025/11/12 15:28:28 by ancourt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != c)
		s++;
	if (c == *s)
		return((char *)s);
	else
		return ("NULL");
}

/*#include <string.h>

int	main(void)
{
	const char *s = "abcd";
	__builtin_printf("ft_strchr : %s\n", ft_strchr(s, 'b'));
	__builtin_printf("**********************************\n");
	__builtin_printf("Real function strchr : \n");
	__builtin_printf("%s\n", strchr(s, 'b'));
	return (0);
}*/