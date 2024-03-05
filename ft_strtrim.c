/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hheng <hheng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 10:16:35 by hheng             #+#    #+#             */
/*   Updated: 2024/03/05 15:35:52 by hheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}

/*
int main() 
{
    char input[] = "   hello world   ";
    char set[] = "hell";

    char *trimmed = ft_strtrim(input, set);
    printf("Original string: \"%s\"\n", input);
    printf("Trimmed string:  \"%s\"\n", trimmed);

    // Free memory allocated by ft_strtrim
    free(trimmed);

    return 0;
}
*/
