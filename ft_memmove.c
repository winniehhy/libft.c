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
    if (src < dest) //overlap
    {
        while (n--)
        ((char*)dest)[n] = ((char *)src)[n];
    }
    else if (src >= dest) //no overlap
    ft_memcpy (dest, src, n);

    return(dest);
}


int main ()
{
    // test : overlap
    char str1[] = "Hello ";
    char str2[] = "World ";

    printf( "Original string  \n");
    printf( "Source : %s\n", str1);
    printf( "Destination : %s\n", str2);
    
    //copy from str1 to str2
    ft_memmove(str2, str1, strlen(str1) + 1); //include NULL

    printf( "\n After ft_memmove  \n");
    printf( "Destination : %s\n", str2);

    
    if (str1 < str2) {
        printf("Overlap detected.\n");
    } else {
        printf("No overlap detected.\n");
    }


    printf( "---------------------------------------------------- \n");
    //test : no overlap
    char str3[] = "Hello ";
    char str4[20] = "Hello ";

    printf("\n Original String  \n");
    printf("Source : %s\n", str3);
    printf("Destination : %s\n", str4);

    ft_memmove(str4, str3, strlen(str3) + 1);

    printf("\n After ft_memmove  \n");
    printf("Destination: %s\n", str4);

    
    if (str3 < str4 ) {
        printf("Overlap detected.\n");
    } else {
        printf("No overlap detected.\n");
    }


    return 0;
}
