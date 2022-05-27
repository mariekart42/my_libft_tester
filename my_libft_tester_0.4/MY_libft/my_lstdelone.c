/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmensing <mmensing@wolfsburg.42student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 17:05:22 by mmensing          #+#    #+#             */
/*   Updated: 2022/05/27 22:01:33 by mmensing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Takes as a parameter a node and frees the memory of the node’s 
 * content using the function ’del’ given as a parameter and free the node. 
 * The memory of ’next’ must not be freed.
 * 
 * @param lst The node to free.
 * @param del The address of the function used to delete the content.
 */
void my_lstdelone(t_list *lst, void (*del)(void *))
{
	del((void *)lst);
}