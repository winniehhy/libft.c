/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hheng < hheng@student.42kl.edu.my>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 06:20:31 by hheng             #+#    #+#             */
/*   Updated: 2024/02/29 06:20:31 by hheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//need to revise

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*temp;
	size_t	i;

	i = -1;
	if ((count > 65535 || size > 65535) && ((i / count) < size))
		return (NULL);
	temp = malloc(count * size);
	if (!temp)
		return (NULL);
	ft_bzero(temp, count * size);
	return (temp);
}
