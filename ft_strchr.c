/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hheng <hheng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 10:57:06 by hheng             #+#    #+#             */
/*   Updated: 2024/02/29 18:09:42 by hheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    char *s1;
    char s2;
    int a;

    s1 = (char*)s;
    s2 = (char)c;
    a =0;
    while(s1[a])
    {
        if (s1[a] ==s2)
        return(&s1[a]);
        a++;
    }
    if(s1[a] == s2)
    return (&s1[a]);
    return(NULL);
}

// int main()
// {
//     const char *str = "Hello World";
//     int search_char = 'd';

//     char *result = ft_strchr(str, search_char);

//     if (result != NULL)
//     {
//         printf("Character '%c' found at position : %d\n", search_char, result - str );
//     }else{
//         printf("Character '%c' not found \n", search_char );
//     }
//     return 0;
// }
