/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmensing <mmensing@wolfsburg.42student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 19:33:53 by mmensing          #+#    #+#             */
/*   Updated: 2022/05/27 22:01:19 by mmensing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
function returns 1 if the given input is a printable character (ASCII 32 - 126)
and 0 if not
*/

int my_isprint(int val)
{
    if(val >= 32 && val <= 126)
        return (1);
    return (0);
}

/* int main()
{
    int bla = 31;
    int test;
    test = isprint(bla);
    printf("ori: %d\n", test);
    test = my_isprint(bla);
    printf("mine: %d\n", test);

} */