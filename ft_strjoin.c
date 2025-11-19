/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancourt <ancourt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 17:56:51 by ancourt           #+#    #+#             */
/*   Updated: 2025/11/19 13:27:20 by ancourt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

int	ft_total_len(const char *str1, const char *str2)
{
	int	total;

	total = 0;
	total = ft_strlen(str1) + ft_strlen(str2) + 1;
	return (total);
}

char	*ft_empty_str(void)
{
	char	*res;

	res = malloc(1);
	if (res)
		res[0] = '\0';
	return (res);
}

char	*ft_cat(const char *str1, const char *str2, char *res)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (str1[i])
		res[k++] = str1[i++];
	while (str2[j])
		res[k++] = str2[j++];
	res[k] = '\0';
	return (res);
}

char	*ft_strjoin(char const *str1, char const *str2)
{
	char	*res;

	if (str1[0] == '\0' && str2[0] == '\0')
		return (ft_empty_str());
	res = malloc(sizeof(char) * ft_total_len(str1, str2) + 1);
	if (!res)
		return (0);
	res = ft_cat(str1, str2, res);
	return (res);
}

/*int	main(void)
{
	const char *str1 = "butterflies";
	const char *str2 = " and flies";

	int total_len = ft_total_len(str1, str2);
	char *result = ft_strjoin(str1, str2);
	__builtin_printf("%d\n", total_len);
	__builtin_printf("%s\n", result);
	free(result);
}*/