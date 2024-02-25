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

/*If the character is an alphabetic character or a digit, it returns 8 (non-zero value).
If the character is neither an alphabetic character nor a digit, it returns 0.*/

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

// if (c >= 65 && c <= 90)
//     return (1);
// else if (c >= 97 && c <= 122)
//     return (1);
// else if (c >= '0' && c <= '9')
//     return (1);
// else
//     return (0);
// int main(void) 
//  {
//    char val1 = 's';
//    char val2 = '8';
//    char val3 = '$';
//    if(ft_isalnum(val1))
//    printf("The character is alphanumeric\n");
//    else
//    printf("The character is not alphanumeric\n");
//    if(ft_isalnum(val2))
//    printf("The character is alphanumeric\n");
//    else
//    printf("The character is not alphanumeric");
//    if(ft_isalnum(val3))
//    printf("The character is alphanumeric\n");
//    else
//     printf("The character is not alphanumeric");
//     return 0;
//  }