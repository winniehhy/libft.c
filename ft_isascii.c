/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hheng < hheng@student.42kl.edu.my>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 10:57:25 by hheng             #+#    #+#             */
/*   Updated: 2024/02/24 10:57:25 by hheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isascii(unsigned int a)
{
	return (a >= 0 && a <= 127);
}

int main()
{
	unsigned int input = 12;
	int result = ft_isascii(input);
	if (result)
	{
		printf("%u is an ASCII character.\n", input);
	}
	else
	{
		printf("%u is not an ASCII character.\n", input);
	}
	return 0;
}
