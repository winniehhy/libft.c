/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hheng <hheng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 18:49:10 by hheng             #+#    #+#             */
/*   Updated: 2024/02/26 19:51:52 by hheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *str, int c, size_t n)
{
	int	i;
	unsigned char *a;

	i = 0;
	a = (unsigned char * )str;
	while (n--)
		a[i++] = (unsigned char)c;
	return (a);
}

int main() {
    char str[] = "Hello, World!";
    printf("Original string: %s\n", str);

    ft_memset(str, 70, 2);
    printf("Modified string: %s\n", str);

    return 0;
}
