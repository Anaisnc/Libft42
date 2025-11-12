/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancourt <ancourt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 20:01:28 by ancourt           #+#    #+#             */
/*   Updated: 2025/11/12 13:22:15 by ancourt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <bsd/string.h>

size_t	ft_strlen(const char *s)
{
	int	len;

	len = 0;
	while (s[len])
	{
		len++;
	}
	return (len);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(src);
	i = 0;
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len);
}

/*
//comp ft_strlcpy.c -lbsd
int	main(void)
{
	char dst[] = "i am the dstination";
	const char src[] = "Hello world";
	size_t size = 6;
	ft_strlcpy(dst, src, size);
	__builtin_printf("src size : %zu\n", ft_strlcpy(dst, src, size));
	__builtin_printf("dest : %s\n", dst);

	// real function strlcpy
	char dst1[] = "i am the dstination";
	const char src1[] = "Hello world";
	size_t size1 = 6;
	strlcpy(dst1, src1, size1);
	__builtin_printf("size : %zu\n", strlcpy(dst1, src1, size1));
	__builtin_printf("dest : %s\n", dst1);
	return (0);
}*/