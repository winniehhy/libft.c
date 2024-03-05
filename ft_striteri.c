/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hheng <hheng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 12:49:32 by hheng             #+#    #+#             */
/*   Updated: 2024/03/05 13:01:21 by hheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (s == NULL)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void print_char_with_index(unsigned int index, char *c)
{
    printf("Character at index %u: %c\n", index, *c);
}

int main()
{
    char input[] = "Hello"; // Input string

    // Call ft_striteri with input string and the print_char_with_index function
    ft_striteri(input, &print_char_with_index);

    return 0;
}
*/
