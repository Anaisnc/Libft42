/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancourt <ancourt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 18:58:23 by ancourt           #+#    #+#             */
/*   Updated: 2025/11/14 19:13:23 by ancourt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	k;

	if (set[0] == '\0')
		return (0);
	str = malloc(sizeof(char) * ( + 1));
	if (!str)
		return (0);
	i = 0;
	j = 0;
	k = 0;
	while (s1[i])
	{
		while (s1[i + j] == set[j] && set[j])
			j++;
		if (set[j] == '\0')
			str[k++] = s1[i++];
		i++;
		j = 0;
	}
	return (str);
}

int	main(void)
{
	
}