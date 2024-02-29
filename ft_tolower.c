/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hheng <hheng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 18:03:49 by hheng             #+#    #+#             */
/*   Updated: 2024/02/29 18:04:57 by hheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//need to self redo the whole thing

	#include "libft.h"

	int	ft_tolower(int c)
	{
		if (c >= 65 && c <= 90)
			return (c + 32);
		return (c);
	}

	int main() {
    // Test case 1: uppercase character
    int ch1 = 'A';

    int result1 = ft_tolower(ch1);
    printf("Original character: %c, Lowercase character: %c\n", ch1, result1);

    // Test case 2: lowercase character
    int ch2 = 'z';

    int result2 = ft_tolower(ch2);
    printf("Original character: %c, Lowercase character: %c\n", ch2, result2);

    // Test case 3: non-alphabetic character
    int ch3 = '5';

    int result3 = ft_tolower(ch3);
    printf("Original character: %c, Lowercase character: %c\n", ch3, result3);

    return 0;
}
