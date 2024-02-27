/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hheng < hheng@student.42kl.edu.my>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 10:57:30 by hheng             #+#    #+#             */
/*   Updated: 2024/02/24 10:57:30 by hheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

int main()
{
   char val1 = 's';
   char val2 = '8';
   char val3 = '$';
   if(ft_isalnum(val1))
   printf("The character is alphanumeric\n");
   else
   printf("The character is not alphanumeric\n");
   if(ft_isalnum(val2))
   printf("The character is alphanumeric\n");
   else
   printf("The character is not alphanumeric");
   if(ft_isalnum(val3))
   printf("The character is alphanumeric\n");
   else
    printf("The character is not alphanumeric");
    return 0;
 }
