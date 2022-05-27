/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmensing <mmensing@wolfsburg.42student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 14:44:32 by mmensing          #+#    #+#             */
/*   Updated: 2022/05/27 22:01:10 by mmensing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int my_isalpha(int val)
{
    if ((val >= 65 && val <= 90) || (val >= 97 && val <= 122))
    {
        return (1);
    }
    return (0);
}

/* 
int main(void)
{
    int beer = 'c';
    int para;
    int yee;
    para = my_isalpha(beer);
    printf("mine: %d\n", para);
    yee = isalpha(beer);
    printf("ori: %d\n", yee);
} */