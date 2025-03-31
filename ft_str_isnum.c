/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_num.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypellegr <ypellegr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 00:59:53 by ypellegr          #+#    #+#             */
/*   Updated: 2025/02/04 02:30:45 by ypellegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (1);
	while (str[i])
	{
		if (str[i] == '\0')
			return (1);
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i += 1;
	}
	return (1);
}

/*int main()
{
	char str[] = "123";
	printf("%d", ft_str_is_numeric(str));
	return (0);
}*/