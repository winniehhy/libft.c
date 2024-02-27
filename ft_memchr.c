/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hheng < hheng@student.42kl.edu.my>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 10:57:18 by hheng             #+#    #+#             */
/*   Updated: 2024/02/24 10:57:18 by hheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t a;
    unsigned char *s1;
    unsigned char s2;

    s1 = (unsigned char *)s;
    s2 = (unsigned char)c;
    a = 0;
    while ( a < n)
    {
        if (s1[a] == s2)
        return (&s1[a]);
        a++;
    }
    return (NULL);
}

int main()
{
    char memory[] = "Hello Word !";
    char to_find = 'a';
    size_t size = strlen(memory);

    void *result = ft_memchr(memory, to_find, size);

    if(result != NULL)
    {
        printf("Byte '%c' is found at memory address: %p\n", to_find, result);
    }else
    {
        printf("Byte '%c' not found in the memory area.\n", to_find);
    }
    return 0;
}
