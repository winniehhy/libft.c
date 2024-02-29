/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hheng <hheng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 17:33:44 by hheng             #+#    #+#             */
/*   Updated: 2024/02/29 18:03:35 by hheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//need to revise

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*s1;
	char	s2;
	int		a;

	s1 = (char *)s;
	s2 = (char )c;
	a = ft_strlen(s);
	while (a > 0)
	{
		if (s1[a] == s2)
			return (&s1[a]);
		a--;
	}
	if (s1[a] == s2)
		return (&s1[a]);
	return (NULL);
}

int main() {
    // Test case 1: character 'o' exists in string
    const char *str1 = "Hello, world!";
    int ch1 = 'o';

    char *result1 = ft_strrchr(str1, ch1);
    if (result1 != NULL) {
        printf("Character '%c' found in string '%s' at position: %ld\n", ch1, str1, result1 - str1);
    } else {
        printf("Character '%c' not found in string '%s'\n", ch1, str1);
    }

    // Test case 2: character 'z' doesn't exist in string
    const char *str2 = "Hello, world!";
    int ch2 = 'z';

    char *result2 = ft_strrchr(str2, ch2);
    if (result2 != NULL) {
        printf("Character '%c' found in string '%s' at position: %ld\n", ch2, str2, result2 - str2);
    } else {
        printf("Character '%c' not found in string '%s'\n", ch2, str2);
    }

    return 0;
}
