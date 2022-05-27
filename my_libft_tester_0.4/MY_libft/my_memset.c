/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmensing <mmensing@wolfsburg.42student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 19:44:58 by mmensing          #+#    #+#             */
/*   Updated: 2022/05/27 22:01:58 by mmensing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
pointer str is void so it can be typecasted
c -> 'character', gets convertet to ASCII 
size_t -> unsigned integer (cant get negative) !have to include stdlib
n -> number of bytes the character gets set to the string

function takes pointer to char array, and set to the amount of given bytes (n) an ascii character in type int(c)
*/


#include "libft.h"

/**
 * @brief memset() writes 'len' bytes of value 'c' (converted to an unsigned char) to
 * the string b.
 * 
 * @param str 
 * @param c character gets converted to ASCII (Bsp. int 0 = char 48)
 * @param n number of bytes the character gets set to the string
 * @return void* 
 */
void *my_memset(void *str, int c, size_t n)
{
    char *ptr;
    ptr = (char *) str;
    size_t i = 0;
    while (i < n)
    {
        ptr[i] = c;
        i++;
    }
    str = (void *) ptr;
    return (str);
}

/* int main()
{
    char array[50] = "123456789 sag ich ja lol";
    printf("befor mine: %s\n", array);
    my_memset(array, 'c', 5);
    printf("after mine: %s\n", array);
   
    printf("befor ori: %s\n", array);
    memset(array, 'c', 5);
    printf("after ori: %s\n", array);
}  
*/