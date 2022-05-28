/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmensing <mmensing@wolfsburg.42student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 23:40:24 by mmensing          #+#    #+#             */
/*   Updated: 2022/05/27 22:01:26 by mmensing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Adds the node ’new’ at the beginning of the list
 * 
 * @param lst The address of a pointer to the first link of a list
 * @param new The address of a pointer to the node to be added to the list.
 */


/* 
typedef struct s_list
{
void           *content;
struct s_list  *next;
}              t_list;   */ 

void my_lstadd_front(t_list **lst, t_list *new)
{
     new->next = *lst;
     *lst = new;
}