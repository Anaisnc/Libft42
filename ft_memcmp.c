/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancourt <ancourt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 18:57:17 by ancourt           #+#    #+#             */
/*   Updated: 2025/11/12 20:33:36 by ancourt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				i;

	str1 = s1;
	str2 = s2;
	i = 0;
	while (i < n)
	{
		while ((str1[i] || str2[i]))
		{
			if (str1[i] != str2[i])
				return (str1[i] - str2[i]);
			i++;
		}
	}
	return (0);
}

/*int	main(void)
{
	char s1[] = "ab";
	char s2[] = "abc";
	int nb = 3;

	__builtin_printf("%d\n", __builtin_memcmp(s1, s2, nb));
	__builtin_printf("%d\n", ft_memcmp(s1, s2, nb));
	return (0);
}*/