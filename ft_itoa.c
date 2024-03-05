/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hheng <hheng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:58:10 by hheng             #+#    #+#             */
/*   Updated: 2024/03/05 16:07:44 by hheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_num_count(long n)
{
	if (n < 0)
		return (ft_num_count(n * -1) + 1);
	if (n > 9)
		return (ft_num_count(n / 10) + ft_num_count(n % 10));
	return (1);
}

char	*ft_itoa(int n)
{
	int		count;
	int		index;
	char	*outcome;
	long	num;

	num = (long)n;
	count = ft_num_count(num);
	index = count;
	outcome = malloc(sizeof(char) * (count + 1));
	if (!outcome)
		return (NULL);
	outcome[count] = '\0';
	if (num < 0)
	{
		outcome[0] = '-';
		num *= -1;
		count--;
	}
	while (count > 0)
	{
		outcome[index-- - 1] = (num % 10) + 48;
		num /= 10;
		count--;
	}
	return (outcome);
}
/*
int main() {
    int number = 12345; 
    char *result; 

    result = ft_itoa(number);
    if (result == NULL) {
        printf("Memory allocation error\n");
        return 1;
    }
    printf("Integer: %d\nString: %s\n", number, result);

    free(result);

    return 0;
}
*/
