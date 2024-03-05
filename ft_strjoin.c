/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hheng <hheng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 09:37:57 by hheng             #+#    #+#             */
/*   Updated: 2024/03/05 10:16:22 by hheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int 	a;
	char	*join;

	if (s1 == NULL || s2 == NULL)
	return (NULL);

	a = ft_strlen(s1) + ft_strlen(s2) + 1;
	join = malloc(a * sizeof(char));
	if(!join)
	return (NULL);

	ft_strlcpy(join, s1, ft_strlen(s1) + 1);
	ft_strlcat(join + ft_strlen(s1), s2, ft_strlen(s2) + 1);
	return (join);
}
/*
int main() 
{
    char *s1 = "Hello, ";
    char *s2 = "world!";
    char *joined_string;

    // Call ft_strjoin to concatenate the strings
    joined_string = ft_strjoin(s1, s2);

    // Check if concatenation was successful
    if (joined_string == NULL) {
        printf("String concatenation failed.\n");
        return 1; 
    }

    // Print the concatenated string
    printf("Concatenated string: %s\n", joined_string);

    // Free the allocated memory
    free(joined_string);

    return 0; // Return success
}
*/
