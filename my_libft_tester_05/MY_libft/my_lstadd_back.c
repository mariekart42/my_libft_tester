/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmensing <mmensing@wolfsburg.42student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 13:44:24 by mmensing          #+#    #+#             */
/*   Updated: 2022/05/27 22:01:24 by mmensing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Adds the node ’new’ at the end of the list
 * 
 * @param lst  The address of a pointer to the first link of a list
 * @param new  The address of a pointer to the node to be added to the list
 */
void my_lstadd_back(t_list **lst, t_list *new)
{
	
	t_list	*last;
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	
	last = my_lstlast(*lst);
	last->next = new;

}