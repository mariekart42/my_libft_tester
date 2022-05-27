/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmensing <mmensing@wolfsburg.42student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 19:40:02 by mmensing          #+#    #+#             */
/*   Updated: 2022/05/27 22:01:48 by mmensing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
function searches for the first occurrence of the character c in the first n bytes in str
returns void pointer to character (in str) if found
returns NULL if not found
*/

void *my_memchr(const void *str, int c, size_t n)
{
    unsigned char *ptr;
    ptr = (unsigned char *) str;
    
    size_t i = 0;
    while (i < n)
    {
        if (ptr[i] == (unsigned char) c)
        {
            return ((void *) ptr + i);
        }
        i++;
    }
    return ((void *) '\0');
}

/* int main()
{
    char array[20] = "scheiss die wand an";
    int c = 119; //w
    char *ptr;
    unsigned long size = 10;
    ptr = my_memchr(array, c, size);
    //ptr = memchr(array, c, size);
    printf("%s\n", ptr);
} */