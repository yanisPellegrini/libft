/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_print.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypellegr <ypellegr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 01:11:18 by ypellegr          #+#    #+#             */
/*   Updated: 2025/03/31 13:07:09 by ypellegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (1);
	while (str[i])
	{
		if (str[i] == '\0')
			return (1);
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i += 1;
	}
	return (1);
}

/*int main()
{
	char str[] = "ssa";
	printf("%d", ft_str_is_printable(str));
	return (0);
}*/