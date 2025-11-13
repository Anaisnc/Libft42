/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancourt <ancourt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 15:30:42 by ancourt           #+#    #+#             */
/*   Updated: 2025/11/13 12:53:22 by ancourt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	const char	*s2 = s;

	while (*s2)
		s2++;
	while (s2 >= s)
	{
		if (*s2 == (char)c)
			return ((char *)s2);
		s2--;
	}
	return (0);
}
/*
#include <string.h>

int	main(void)
{
	const char *s = "abcd";
	__builtin_printf("ft_strrchr : %s\n", ft_strrchr(s, 'b'));
	__builtin_printf("**********************************\n");
	__builtin_printf("Real function strrchr : \n");
	__builtin_printf("%s\n", strrchr(s, 'b'));
	return (0);
}*/