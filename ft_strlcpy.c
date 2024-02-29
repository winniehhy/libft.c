/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hheng <hheng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 17:28:32 by hheng             #+#    #+#             */
/*   Updated: 2024/02/29 17:46:12 by hheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t i;

	i = 0;
	if(size > 0)
	{
		while (src[i] && (i < (size - 1)))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src[i])
	i++;
	return (i);
}

int main()
{
	char dest[20];
	const char *src = "Hello , good morning my friend";
	size_t size = sizeof(dest);
	size_t result = ft_strlcpy (dest, src, size);

	 printf("Copied string: %s\n", dest);
    printf("Length of copied string: %zu\n", result);

	return 0;
}
