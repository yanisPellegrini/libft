/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypellegr <ypellegr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 11:15:17 by ypellegr          #+#    #+#             */
/*   Updated: 2025/04/02 12:23:47 by ypellegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**result;

	i = 0;
	j = 0;
	result = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	while (s[i])
	{
		while (s[i])
		{
			while (s[i] && s[i] == c)
				i++;
			k = 0;
			while (s[i + k] && s[i + k] != c)
				k += 1;
			if (k > 0)
			{
				result[j] = malloc(sizeof(char) * (k + 1));
				ft_strlcpy(result[j++], s + i, k + 1);
			}
			i += k;
		}
		result[j] = NULL;
	}
	return result;
}
