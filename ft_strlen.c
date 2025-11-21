/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancourt <ancourt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 19:51:00 by ancourt           #+#    #+#             */
/*   Updated: 2025/11/20 13:43:29 by ancourt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t 	len;

	len = 0;
	while (s[len])
	{
		len++;
	}
	return (len);
}

/*int	main(void)
{
	__builtin_printf("%d\n", ft_strlen("blabla"));
	return (0);
}*/