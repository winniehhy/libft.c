/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hheng < hheng@student.42kl.edu.my>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 10:57:23 by hheng             #+#    #+#             */
/*   Updated: 2024/02/24 10:57:23 by hheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int main()
{
	int input = 'a';
	int result;

	result = ft_isdigit(input);
	if(result)
	{
		printf("'%c' is a digit\n", input);
	}
	else
	{
		printf("'%c' is not a digit.\n", input);
	}
	return 0;
}
