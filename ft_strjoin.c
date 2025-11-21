/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancourt <ancourt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 17:56:51 by ancourt           #+#    #+#             */
/*   Updated: 2025/11/20 13:41:06 by ancourt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_cat(const char *str1, const char *str2, char *res)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (str1[i])
	{
		res[i] = str1[i];
		i++;
	}
	j = 0;
	while (str2[i])
	{
		res[i + j] = str2[j];
		j++;
	}
	res[i + j] = '\0';
	return (res);
}
char	*ft_strjoin(char const *str1, char const *str2)
{
	size_t	len1;
	size_t	len2;
	char	*res;

	if (!str1 || !str2)
		return (NULL);
	len1 = ft_strlen(str1);
	len2 = ft_strlen(str2);
	res = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!res)
		return (NULL);
	ft_cat(str1, str2, res);
	return (res);
}

/*int	main(void)
{
	const char *str1 = "butterflies";
	const char *str2 = " and flies";

	char *result = ft_strjoin(str1, str2);
	__builtin_printf("%s\n", result);
	free(result);
}*/