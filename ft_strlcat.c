/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hheng <hheng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 15:59:01 by hheng             #+#    #+#             */
/*   Updated: 2024/02/29 16:08:24 by hheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t 	dest_len;

	i = 0;
	j = 0;
	dest_len = ft_strlen(dest);
	if(size == 0)
	return (ft_strlen(src));
	if (size -1 >= ft_strlen(dest))
	{
		while (dest[i])
		i++;
		while (src[j] && (i < size -1))
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		dest[i] = '\0';
		return (dest_len + ft_strlen(src));
	}
	else
	return (ft_strlen(src) + size);

	return (0);
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
    char dest[20] = "Hello ";
    const char *src = "world";
    size_t size = sizeof(dest);

    size_t result = ft_strlcat(dest, src, size);

    printf("Concatenated string: %s\n", dest);
    printf("Length of concatenated string: %zu\n", result);

    return 0;
}
