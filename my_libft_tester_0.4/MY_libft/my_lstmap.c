/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmensing <mmensing@wolfsburg.42student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 15:53:07 by mmensing          #+#    #+#             */
/*   Updated: 2022/05/27 22:01:40 by mmensing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Iterates the list ’lst’ and applies the function ’f’ on the content
 * of each node. Creates a new list resulting of the successive applications of
 * the function ’f’. The ’del’ function is used to delete the content of a node
 * if needed.
 * 
 * @param lst The address of a pointer to a node.
 * @param f The address of the function used to iterate on the list.
 * @param del The address of the function used to delete the content of a node if needed.
 * @return t_list* The new list. NULL if the allocation fails.
 */
t_list *my_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
     t_list *new_node;

     my_lstiter(lst, f);
     
     
}