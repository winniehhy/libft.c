/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hheng < hheng@student.42kl.edu.my>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 10:57:20 by hheng             #+#    #+#             */
/*   Updated: 2024/02/24 10:57:20 by hheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	else
		return (0);
}

int main()
{
	char input_char;
	int result;

	printf("Enter a character : ");
	scanf("%c", &input_char);

	result = ft_isprint(input_char);

	if(result)
	{
		printf(" '%c' is a printable character.\n", input_char);
	} 
	else{
		printf( " '%c' is not a printable character.\n", input_char);
	}

	return 0;
}
