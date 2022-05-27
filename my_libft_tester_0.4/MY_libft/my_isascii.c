/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmensing <mmensing@wolfsburg.42student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 19:24:52 by mmensing          #+#    #+#             */
/*   Updated: 2022/05/27 22:01:14 by mmensing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
if the given input is a character of the ASCII table (-1 [0 to 127] 128), function returns 1, 
otherwise its returning 0
*/

int my_isascii(int val)
{
    if( val >= 0 && val <= 127)
        return (1);
    return (0);
}

/* int main()
{
    int bla = -1;
    int test;
    test = isascii(bla);
    printf("ori: %d\n", test);
    test = my_isascii(bla);
    printf("mine: %d\n", test);
} */