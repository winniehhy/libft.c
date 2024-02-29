/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hheng <hheng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 19:07:23 by hheng             #+#    #+#             */
/*   Updated: 2024/02/26 19:08:44 by hheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *s)
{
	size_t count;

	count = 0;
	while(s[count])
	count++;
	return(count);

}

int main()
{
	const char *str = "Hello World !";
	size_t length = strlen(str);
	printf("Length of the stirng '%s' is : %zu\n", str, length);
	return 0;
}
