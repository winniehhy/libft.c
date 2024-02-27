/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hheng <hheng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 18:44:18 by hheng             #+#    #+#             */
/*   Updated: 2024/02/26 19:12:38 by hheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

int main() {
    char str[] = "Hello, World!";
    printf("Original string: %s\n", str);

    ft_bzero(str, sizeof(str));
    printf("Modified string: %s\n", str);

    return 0;
}
