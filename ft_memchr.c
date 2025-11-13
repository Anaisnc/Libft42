/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancourt <ancourt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 18:04:56 by ancourt           #+#    #+#             */
/*   Updated: 2025/11/12 18:55:50 by ancourt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*s2;
	size_t				i;

	s2 = s;
	i = 0;
	while (i < n)
	{
		while (s2[i] && s2[i] != (char)c)
			i++;
		if ((char)c == s2[i])
			return ((void *)s2 + 1);
		else
			return (0);
	}
	return (0);
}

/*#include <string.h>

int	main(void)
{
	const char *s = "abcd";
	size_t n = 3;
	const char *s1 = "abcd";
	size_t n1 = 3;
	__builtin_printf("adresse = %p\ns1 = %s\n", memchr(s1, 'b', n1), s1);
	__builtin_printf("ft_memchr : %p\n", ft_memchr(s, 'b', n));
	__builtin_printf("**********************************\n");
	__builtin_printf("Real function memchr : \n");
	const char *s2 = "abcd";
	size_t n2 = 3;
	__builtin_printf("adresse = %p\ns2 = %s\n", memchr(s2, 'b', n2), s2);
	__builtin_printf(" memchr : %p\n", memchr(s, 'b', n));
	return (0);
}*/