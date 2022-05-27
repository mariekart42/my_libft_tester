/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmensing <mmensing@wolfsburg.42student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 20:22:29 by mmensing          #+#    #+#             */
/*   Updated: 2022/05/27 22:01:46 by mmensing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Counts the number of nodes in a list.
 * 
 * @param lst The beginning of the list.
 * @return int The length of the list
 */

int my_lstsize(t_list *lst)
{
	int i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);

	// works too but more stupid
	// t_list *new_node = NULL;
	// new_node = lst;

	// int i = 0;

	// while (new_node != NULL)
	// {
	// 	new_node = new_node->next;
	// 	i++;
	// }
	// return (i);
}


/* int main()
{
	t_list *val = NULL;
	int i = 0;
	i = my_lstsize(val);
	printf("i: %d\n", i);
} */

