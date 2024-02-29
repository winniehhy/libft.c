/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hheng <hheng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 16:10:25 by hheng             #+#    #+#             */
/*   Updated: 2024/02/29 18:00:13 by hheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//need to revise

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = ft_strlen(needle);
	if (!*needle)
		return ((char *)haystack);
	while (haystack[0] && len > 0)
	{
		if (len >= i && ft_memcmp((char *)haystack, (char *)needle, i) == 0)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}


int main() {
    // Test case 1: needle exists in haystack
    const char *haystack1 = "Hello, world!";
    const char *needle1 = "world";
    size_t len1 = ft_strlen(haystack1);

    char *result1 = ft_strnstr(haystack1, needle1, len1);
    if (result1 != NULL) {
        printf("Needle '%s' found in haystack '%s' at position: %ld\n", needle1, haystack1, result1 - haystack1);
    } else {
        printf("Needle '%s' not found in haystack '%s'\n", needle1, haystack1);
    }

    // Test case 2: needle doesn't exist in haystack
    const char *haystack2 = "Hello, world!";
    const char *needle2 = "universe";
    size_t len2 = ft_strlen(haystack2);

    char *result2 = ft_strnstr(haystack2, needle2, len2);
    if (result2 != NULL) {
        printf("Needle '%s' found in haystack '%s' at position: %ld\n", needle2, haystack2, result2 - haystack2);
    } else {
        printf("Needle '%s' not found in haystack '%s'\n", needle2, haystack2);
    }

    return 0;
}
