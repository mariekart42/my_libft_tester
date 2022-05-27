/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmensing <mmensing@wolfsburg.42student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 00:56:17 by mmensing          #+#    #+#             */
/*   Updated: 2022/05/27 22:02:49 by mmensing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int my_tolower(int c)
{
    if ((c >= 65) && (c <= 90))
        return (c + 32);
    return (c);
}


/* int main()
{
    int c = 100;
    int val;
    val = my_tolower(c);
    printf("val: %c\n", val);
}  */
