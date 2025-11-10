/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancourt <ancourt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 12:41:56 by ancourt           #+#    #+#             */
/*   Updated: 2025/11/10 17:17:28 by ancourt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdlib.h>

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

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	size_t				d_len;
	unsigned char		*final;
	unsigned char		*temp;
	const unsigned char	*beg;

	final = dest;
	beg = src;
	d_len = ft_strlen(dest);
	i = 0;
	if (i < d_len)
	{
		temp[i] = beg[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		final[i] = beg[i];
		i++;
	}
	final[i] = '\0';
	return (final);
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	char		dest[] = {"abc"};
	const char	src[] = {"h"};
	size_t		n;
	int			len;
	int			i;

	n = 1;
	i = 0;
	len = strlen(dest);
	memmove(dest, src, n);
	while (dest[i])
	{
		__builtin_printf("%c", dest[i]);
		i++;
	}
	return (0);
}*/
