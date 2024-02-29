/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hheng <hheng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 15:03:05 by hheng             #+#    #+#             */
/*   Updated: 2024/02/29 15:58:28 by hheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//need to revise

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int a;

	a = 0;
	while ( a < n)
	{
		if (s1[a] !='\0' && (s1[a] == s2[a]))
		a++;
	 else 
		return ((unsigned char)s1[a] - (unsigned char)s2[a]);
	}
	return (0);
}

int main ()
{
	const char *str1= "Hello";
	const char *str2 = "Hella";
	size_t n = 3; 

	int result = ft_strncmp (str1, str2, n);

	if (result < 0)
	{
		printf("The first %zu character of str1 are lexicographically less than str2.\n", n);
	}
	else if (result > 0)
	{
		printf("The first %zu character of str1 are lexicographically greater than str2.\n", n);
	}
	else {
		printf("The first %zu character of str1 are lexicographically equal to  str2.\n", n);
	}
	return 0;
}
