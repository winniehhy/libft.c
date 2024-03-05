/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hheng <hheng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 09:36:22 by hheng             #+#    #+#             */
/*   Updated: 2024/03/05 09:37:15 by hheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dup;
	int		len;
	int		i;

	len = ft_strlen(s1);
	i = 0;
	dup = malloc((sizeof(char) * len) + 1);
	if (!dup)
		return (NULL);
	while (s1[i] != '\0')
	{
		dup[i] = s1[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*
int main()
{
    const char *originalString = "Hello!";
    char *duplicateString = ft_strdup(originalString);

    if (duplicateString)
    {
        printf("Original: %s\n", originalString);
        printf("Duplicate: %s\n", duplicateString);

        free(duplicateString);
    }
    else
    {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
*/
