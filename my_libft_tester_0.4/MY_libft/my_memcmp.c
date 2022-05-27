/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmensing <mmensing@wolfsburg.42student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 19:52:10 by mmensing          #+#    #+#             */
/*   Updated: 2022/05/27 22:01:51 by mmensing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
function compares two strings
returns the difference (ASCII) between str1 and str2
returns 0 if they are the same
*/

int my_memcmp(const void *str1, const void *str2, size_t n)
{
    unsigned char *ptr1;
    unsigned char *ptr2;
    ptr1 = (unsigned char *) str1;
    ptr2 = (unsigned char *) str2;
    size_t c = 0;
    while (c < n)
    {
        if ((ptr1[c] - ptr2[c]) != 0)
            return (ptr1[c] - ptr2[c]);
        c++;
    }
    return (0);
}

/* int main()
{
    char array1[20] = "vier ist toll";
    char array2[20] = "bier ist fantastisch";
    int size = 5;
    int val;
    val = my_memcmp(array1, array2, size);
    //val = memcmp(array1, array2, size);
    printf("%d\n", val);
}  */