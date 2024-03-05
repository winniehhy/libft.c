/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hheng <hheng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 06:20:31 by hheng             #+#    #+#             */
/*   Updated: 2024/03/05 09:31:45 by hheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*temp;
	size_t	i;

	i = -1;
	if ((n > 65535 || size > 65535) && ((i / n) < size))
		return (NULL);
	temp = malloc(n * size);
	if (!temp)
		return (NULL);
	ft_bzero(temp, n * size);
	return (temp);
}
/*
int main()
{
	size_t num_element = 10;
	size_t element_size = sizeof(int);
	int *arr;

	arr = ft_calloc(num_element, element_size);

//chech if allocation was successful
	if (arr == NULL)
	{
		printf("Memory allocation failed.\n");
	return 1;
	}


	printf("Allocated array :\n");
	for (size_t i = 0; i< num_element; i++)
{
	printf("%d", arr[i]); // accessing element of the allocated array
}
	free(arr);
	return 0;
}
*/
