/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmensing <mmensing@wolfsburg.42student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 17:09:55 by mmensing          #+#    #+#             */
/*   Updated: 2022/05/27 22:01:31 by mmensing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Deletes and frees the given node and every successor of that node, 
 * using the function ’del’ and free(3).
 * Finally, the pointer to the list must be set to NULL.
 * 
 * @param lst The address of a pointer to a node.
 * @param del The address of the function used to delete the content of the node.
 */
// where free??
void my_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *temp;
	if(!*lst)
		return ;
	//free((void *)lst);
	while(*lst)
	{
		temp = (*lst)->next;
		my_lstdelone(*lst, del);
		//free((void *)temp);
		(*lst) = temp;
	}
	//lst = NULL;
	// del((void *)lst);
	

}