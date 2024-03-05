/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hheng < hheng@student.42kl.edu.my>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 11:06:13 by hheng             #+#    #+#             */
/*   Updated: 2024/03/02 11:06:13 by hheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*temp;
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if ((size_t)start > ft_strlen(s))
		len = 0;
	if (len < ft_strlen(s))
		temp = malloc(len * sizeof(char) + 1);
	else
		temp = malloc(ft_strlen(s) * sizeof(char) + 1);
	if (!temp)
		return (NULL);
	while (s[start] && len > 0)
	{
		temp[i] = ((char *)s)[start];
		start++;
		i++;
		len--;
	}
	temp[i] = '\0';
	return (temp);
}

size_t ft_strlen(const char *s)
{
	size_t count;

	count = 0;
	while(s[count])
	count++;
	return(count);

}

int main() {
    char *input = "Hello, world!";
    unsigned int start = 6; // Start index for substring
    size_t length = 3; // Length of substring
    
    // Call ft_substr to extract the substring
    char *substring = ft_substr(input, start, length);

    if (substring == NULL) {
        printf("Failed to extract substring.\n");
    } else {
        printf("Substring: %s\n", substring);
        free(substring); // Free memory allocated for substring
    }

    return 0;
}
