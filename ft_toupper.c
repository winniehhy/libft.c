/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hheng <hheng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 18:04:00 by hheng             #+#    #+#             */
/*   Updated: 2024/02/29 18:05:14 by hheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//need to self redo everything


#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

int main() {
    // Test case 1: lowercase character
    int ch1 = 'a';

    int result1 = ft_toupper(ch1);
    printf("Original character: %c, Uppercase character: %c\n", ch1, result1);

    // Test case 2: uppercase character
    int ch2 = 'Z';

    int result2 = ft_toupper(ch2);
    printf("Original character: %c, Uppercase character: %c\n", ch2, result2);

    // Test case 3: non-alphabetic character
    int ch3 = '5';

    int result3 = ft_toupper(ch3);
    printf("Original character: %c, Uppercase character: %c\n", ch3, result3);

    return 0;
}
