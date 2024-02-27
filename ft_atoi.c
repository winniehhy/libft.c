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

#include "libft.h"

int	ft_atoi(const char *str)
{
	int i;
	int sign;
	int result;

	i = 0;
	sign = 1;
	result = 0;
	//check whitespace
	while((str[i] >= 9 && str[i] <= 13 || str[i] == ' '))
		i++;
	//check sign
	if(str[i] =='+' ||str[i] == '-')
	{
		if(str[i] == '-')
		sign *= -1;
		i++;
	}
	//convert digit to integer
	while(str[i] >= '0' && str[i] <='9')
	{
		result *=10;
		result += (str[i]- 48);
		i++;
	}
	result *= sign;
	return (result);
	
}

int main()
{
	char str1[] = "1234";
	char str2[] = "-0";
	char str3[] = "123 hello";

	printf("String : \"%s\", Converted Integer: %d\n", str1,ft_atoi(str1));
	printf("String : \"%s\", Converted Integer: %d\n", str2, ft_atoi(str2));
	printf("String : \"%s\", Converted Integer: %d\n", str3, ft_atoi(str3));
	return 0;
}
