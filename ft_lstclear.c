/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hheng <hheng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 18:37:00 by hheng             #+#    #+#             */
/*   Updated: 2024/03/07 17:14:31 by hheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*current;

	if (lst == NULL)
		return ;
	current = *lst;
	while (current != 0)
	{
		tmp = current;
		current = current->next;
		ft_lstdelone(tmp, del);
	}
	*lst = 0;
}
