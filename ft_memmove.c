/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hheng < hheng@student.42kl.edu.my>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 10:57:11 by hheng             #+#    #+#             */
/*   Updated: 2024/02/24 10:57:11 by hheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    if (src < dest) //potentially overlap after src
    {
        while (n--)
        ((char*)dest)[n] = ((char *)src)[n];
    }
    else if (src >= dest) //potentially overlap before src
    ft_memcpy (dest, src, n);

    return(dest);
}

void	*ft_memcpy(void *d, const void *s, size_t a)
{
	size_t i;

	if (!d && !s)
		return (0);
	i = 0;
	while (i < a)
	{
		((unsigned char *)d)[i] = ((unsigned char *)s)[i];
		i++;
	}
	return (d);
}


int main()
{
    char src[] = "abcdef";

    //using src+1 as dst to demonstrate when dst overlaps src
    ft_memmove(src+1, src, 4);
    printf("output   : %s\n", src);
    printf("expected : aabcdf\n\n");

    //if not overlap will like normal memcpy = abcd
}
