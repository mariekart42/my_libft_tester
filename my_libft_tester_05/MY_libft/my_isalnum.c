/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmensing <mmensing@wolfsburg.42student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 19:06:42 by mmensing          #+#    #+#             */
/*   Updated: 2022/05/27 22:01:07 by mmensing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
fuction returns 1 if the given argument is a alphanumeric character (0-9 & a-z & A-Z) and
returns 0 if its neither an alphabetic character nor a digit
*/

int my_isalnum(int val)
{
    if((val >= 48 && val <= 57) || (val >= 65 && val <= 90) || (val >= 97 && val <= 122))
        return (1);
    return (0);

}

/* 
int main()
{
    int bla = 49;
    int test;
    test = isalnum(bla);
    printf("ori: %d\n", test);
    test = my_isalnum(bla);
    printf("mine: %d\n", test);
} */