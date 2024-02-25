/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hheng < hheng@student.42kl.edu.my>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 09:46:33 by hheng             #+#    #+#             */
/*   Updated: 2024/02/25 09:46:33 by hheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	negative;
	int	result;

	i = 0;
	negative = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == ' '))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			negative *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += (str[i] - 48);
		i++;
	}
	result *= negative;
	return (result);
}