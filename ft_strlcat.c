/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancourt <ancourt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 18:31:07 by ancourt           #+#    #+#             */
/*   Updated: 2025/11/12 13:53:01 by ancourt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len;
	size_t	len_s;

	len = ft_strlen(dst);
	len_s = ft_strlen(src);
	i = 0;
	j = 0;
	while (dst[i])
		i++;
	if (size > 0)
	{
		while (src[j] && j < (size - len) - 1)
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
	}
	return (len + len_s);
}

/*
//comp ft_strlcat.c -lbsd
#include <bsd/string.h>
#include <stdio.h>

int	main(void)
{
	char dst[] = "hello";
	const char src[] = " world";
	size_t size = 12;
	ft_strlcat(dst, src, size);
	__builtin_printf("dst+src : %zu\n", ft_strlcat(dst, src, size));
	__builtin_printf("dst : %s\n", dst);

	__builtin_printf("-------------------\n");
	__builtin_printf("Real function strlcat : \n");
	char dst1[] = "hello";
	const char src1[] = " world";
	size_t size1 = 12;
	strlcat(dst1, src1, size1);
	__builtin_printf("dst+src : %zu\n", strlcat(dst1, src1, size1));
	__builtin_printf("dst : %s\n", dst1);
	return (0);
}*/