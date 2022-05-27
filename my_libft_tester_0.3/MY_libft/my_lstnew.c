/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmensing <mmensing@wolfsburg.42student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 22:59:04 by mmensing          #+#    #+#             */
/*   Updated: 2022/05/27 22:01:43 by mmensing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Allocates (with malloc(3)) and returns a new node (ptr).
 * The variable ’content’ (in t_list) is initialized with the value of ’content’
 * The variable ’next’ is initialized to NULL.
 * 
 * @param content The content to create the node with.
 * @return t_list* 
 */

t_list *my_lstnew(void *content)
{
	t_list	*ptr;

	if (!(ptr = (t_list *)malloc(sizeof(*ptr))))
		return (NULL);

	ptr->content = content;
	ptr->next = NULL;

	return (ptr);
}

