/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancourt <ancourt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 18:57:17 by ancourt           #+#    #+#             */
/*   Updated: 2025/11/29 18:24:32 by ancourt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				i;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

/*#include <string.h>

int	main(void)
{
	char s1[] = "abcdefghij";
	char s2[] = "abcdefgxyz";
	int nb = 7;

	__builtin_printf("%d\n", __builtin_memcmp(s1, s2, nb));
	__builtin_printf("%d\n", ft_memcmp(s1, s2, nb));
	__builtin_printf("%d\n", ft_memcmp(NULL, s2, nb));
	__builtin_printf("%d\n", memcmp(NULL, s2, nb));
	return (0);
}*/