/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hheng <hheng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 18:20:37 by hheng             #+#    #+#             */
/*   Updated: 2024/02/26 19:12:13 by hheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if	((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}

int main()
{
	char test_char = '2';

	if (ft_isalpha(test_char))
	{
		printf("%c is an alphabetic character.\n", test_char);
	}
	else
	{
		printf("%c is not an alphabetic character.\n", test_char);
	}
	return 0;
}
