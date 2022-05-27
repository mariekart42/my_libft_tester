/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmensing <mmensing@wolfsburg.42student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 23:45:53 by mmensing          #+#    #+#             */
/*   Updated: 2022/05/27 22:01:01 by mmensing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void my_bzero(void *str, size_t n)
{
    char *ptr;
    ptr = (char *) str;
    size_t i = 0;
    while (i < n)
    {
        ptr[i] = '\0';
        i++;
    }
}
/* 
int main()
{
    char array[30] = "plz delete dis shit";
    printf("before mine: %s\n", array);
    my_bzero(array, 2);
    printf("after mine: %s\n", array);
    
    printf("before ori: %s\n", array);
    bzero(array, 2);
    printf("after ori: %s\n", array);
} */