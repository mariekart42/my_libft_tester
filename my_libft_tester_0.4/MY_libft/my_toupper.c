/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmensing <mmensing@wolfsburg.42student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 00:49:38 by mmensing          #+#    #+#             */
/*   Updated: 2022/05/27 22:02:51 by mmensing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
returns given char in uppercase
*/

int my_toupper(int c)
{
    if ((c >= 97) && (c <= 122))
        return (c - 32);
    return (c);
}

/* int main()
{
    int c = 100;
    int val;
    val = my_toupper(c);
    printf("val: %c\n", val);
    
} */