/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elandi <elandi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 16:29:00 by elandi            #+#    #+#             */
/*   Updated: 2025/02/19 12:22:52 by elandi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str, int len)
{
	int	i;
	int	symbol;
	int	res;

	i = 0;
	res = 0;
	symbol = 1;
	while (i < len && ((str[i] >= 9 && str[i] <= 13) || str[i] == ' '))
		i++;
	while (i < len && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			symbol = symbol * -1;
		i++;
	}
	while (i < len && !(str[i] < '0' || str[i] > '9'))
	{
		res = res * 10;
		res = res + (str[i] - 48);
		i++;
	}
	return (res * symbol);
}
