/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hheng < hheng@student.42kl.edu.my>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 10:57:15 by hheng             #+#    #+#             */
/*   Updated: 2024/02/24 10:57:15 by hheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t a;
    unsigned char *s_1;
    unsigned char *s_2;

    s_1 = (unsigned char *)s1;
    s_2 = (unsigned char *)s2;
    a = 0;
    while(a < n)
    {
        if(s_1[a] != s_2[a])
            return (s_1[a]- s_2[a]);
            a++;
    }
    return (0);
}

int main()
{
     char memory1[] = "Ga";
     char memory2[] = "Good";
    size_t size = strlen(memory1);

    int result = ft_memcmp(memory1,memory2,size);

    if (result == 0)
    {
        printf("Memory areas are equal.\n");
    }else if (result < 0)
    {
        printf( "Memory area 1 is less than memory area 2.\n");
    }else{
        printf("Memory area 1 is greater than memory area 2. \n");
    }
    return (0);

}
