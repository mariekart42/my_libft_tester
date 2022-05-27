/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmensing <mmensing@wolfsburg.42student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 18:54:20 by mmensing          #+#    #+#             */
/*   Updated: 2022/05/27 22:01:16 by mmensing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
function returns 0 if given input is a numeric character (digit from 0 - 9)
and returns 1 if not
*/

int my_isdigit(int val)
{
    if(val >= 48 && val <= 57)
    {
        return (1);
    }
    return (0);
}

/* int main()
{
    int bla = 50;
    int test;
    test = my_isdigit(bla);
    printf("%d\n", test);
    test = my_isdigit(bla);
    printf("%d\n", test);
}
 */
