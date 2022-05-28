/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmensing <mmensing@wolfsburg.42student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 17:21:36 by mmensing          #+#    #+#             */
/*   Updated: 2022/05/27 22:01:35 by mmensing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Iterates the list ’lst’ and applies the function ’f’ on 'content' 
 * of each node.
 * 
 * @param lst  The address of a pointer to a node.
 * @param f  The address of the function used to iterate on the list.
 */
void my_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

//----------------------------------------------------
// #include <stdlib.h>
// #include <unistd.h>
// #include <string.h>
// #include <stdio.h>

// void	my_modify_list_with_d(void *elem)
// {
// 	int		len;
// 	char		*content;

// 	len = 0;
// 	content = (char *)elem;
// 	while (content[len])
// 	{
// 		content[len++] = 'd';
// 	}
// }

// void	my_print_result(t_list *elem)
// {
// 	int		len;

// 	while (elem)
// 	{
// 		len = 0;
// 		while (((char *)elem->content)[len])
// 			len++;
// 		write(1, elem->content, len);
// 		write(1, "\n", 1);
// 		elem = elem->next;
// 	}
// }

// t_list	*my_lstnewone(void *content)
// {
// 	t_list	*elem;

// 	elem = (t_list *)malloc(sizeof(t_list));
// 	if (!elem)
// 		return (NULL);
// 	if (!content)
// 		elem->content = NULL;
// 	else
// 		elem->content = content;
// 	elem->next = NULL;
// 	return (elem);
// }

// int main(int argc, const char *argv[])
// {
// 	t_list		*elem;
// 	t_list		*elem2;
// 	t_list		*elem3;
// 	t_list		*elem4;
// 	char		*str = strdup("lorem");
// 	char		*str2 = strdup("ipsum");
// 	char		*str3 = strdup("dolor");
// 	char		*str4 = strdup("sit");

// 	elem = my_lstnewone(str);
// 	elem2 = my_lstnewone(str2);
// 	elem3 = my_lstnewone(str3);
// 	elem4 = my_lstnewone(str4);
// 	alarm(5);
// 	if (argc == 1 || !elem || !elem2 || !elem3 || !elem4)
// 		return (0);
// 	elem->next = elem2;
// 	elem2->next = elem3;
// 	elem3->next = elem4;

// 		my_lstiter(elem, &my_modify_list_with_d);
// 		my_print_result(elem);
	
// 	return (0);
// }