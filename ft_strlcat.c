/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hheng <hheng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 15:59:01 by hheng             #+#    #+#             */
/*   Updated: 2024/03/07 17:28:58 by hheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dlen;

	if (!dst && dstsize == 0)
		return (0);
	i = 0;
	dlen = ft_strlen(dst);
	if (dstsize < dlen + 1)
		return (dstsize + ft_strlen(src));
	while (i < (dstsize - dlen - 1) && src[i])
	{
		dst[i + dlen] = src[i];
		++i;
	}
	dst[i + dlen] = '\0';
	return (dlen + ft_strlen(src));
}
/*

int main() {
     char dest[20] = "Hello ";
     const char *src = "world";
     size_t size = sizeof(dest);

     size_t result = ft_strlcat(dest, src, size);

     printf("Concatenated string: %s\n", dest);
     printf("Length of concatenated string: %zu\n", result);

     return 0;
 }
 */
