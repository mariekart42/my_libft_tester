/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmensing <mmensing@wolfsburg.42student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 19:40:18 by mmensing          #+#    #+#             */
/*   Updated: 2022/05/27 22:02:30 by mmensing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
returns len of given string
*/

size_t		my_strlen (const char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

/* int main(void)
{
    char array[10] = "bananaboot";
    int test;
    test = my_strlen(array);
    printf("muine: %d\n", test);
} */