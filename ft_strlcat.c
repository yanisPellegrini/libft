/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypellegr <ypellegr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 04:15:40 by ypellegr          #+#    #+#             */
/*   Updated: 2025/02/12 08:11:12 by ypellegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len_dest;
	unsigned int	len_src;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	if (nb <= len_dest)
		return (nb + len_src);
	i = len_dest;
	j = 0;
	while (src[j] && (i < nb - 1))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (i < nb)
		dest[i] = '\0';
	return (len_dest + len_src);
}

// int	main(void)
// {
// 	char dest[50] = "Hello";
// 	char src[] = " World!";
// 	printf("%d\n", ft_strlcat(dest, src, 3));
// 	printf("%s\n", dest);
// 	return (0);
// }