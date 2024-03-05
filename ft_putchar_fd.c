/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hheng <hheng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:59:05 by hheng             #+#    #+#             */
/*   Updated: 2024/03/05 12:09:28 by hheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int main()
{
	char character = 'A';

	//STDOUT_FILENO is a file descriptor for standard output in unistd.h
	ft_putchar_fd(character, STDOUT_FILENO);
	return 0;
}
