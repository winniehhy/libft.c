/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hheng <hheng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 12:25:09 by hheng             #+#    #+#             */
/*   Updated: 2024/03/05 12:48:11 by hheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*outcome;

	i = 0;
	if (s == NULL)
		return (NULL);
	outcome = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!outcome)
		return (NULL);
	while (s[i])
	{
		outcome[i] = f(i, s[i]);
		i++;
	}
	outcome[i] = '\0';
	return (outcome);
}

/*
char uppercase_mapping(unsigned int index, char c)
{
    if (c >= 'a' && c <= 'z') {
        return c - ('a' - 'A');
    } else {
        return c;
    }
}

int main()
{
	char input[] = "Hello World"; // Input string
    char *result;                 // Resulting string after applying mapping function

    // Call ft_strmapi with input string and the mapping function
    result = ft_strmapi(input, &uppercase_mapping);

    // Check if ft_strmapi returned NULL indicating an error
    if (result == NULL)
    {
        printf("Error: ft_strmapi returned NULL\n");
        return 1;
    }

    // Print the original and mapped strings
    printf("Original string: %s\n", input);
    printf("Mapped string  : %s\n", result);

    // Free the memory allocated for the resulting string
    free(result);
}
*/
