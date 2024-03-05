/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hheng <hheng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 16:39:27 by hheng             #+#    #+#             */
/*   Updated: 2024/03/05 18:26:07 by hheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef struct s_list {
    void *content;
    struct s_list *next;
} t_list;

t_list		*ft_lstnew(void *content)
{
	t_list	*new;

	if (!(new = malloc(sizeof(t_list))))
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
/*
int main() {

    int data1 = 10;
    int data2 = 20;

    // Create new list nodes with ft_lstnew
    t_list *node1 = ft_lstnew(&data1);
    t_list *node2 = ft_lstnew(&data2);

    // Print the content of the nodes
    printf("Node 1 content: %d\n", *(int *)node1->content);
    printf("Node 2 content: %d\n", *(int *)node2->content);

    // Free the allocated memory for the nodes
    free(node1);
    free(node2);

    return 0;
}
*/
