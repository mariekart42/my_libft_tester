/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmensing <mmensing@wolfsburg.42student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 01:01:51 by mmensing          #+#    #+#             */
/*   Updated: 2022/05/27 22:02:16 by mmensing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
function searches for the FIRST occurrence in str for character c
returns NULL if not found
returns pointer to the character if found (pointer points to the place where founc c in str)
if str doesnt end with NUL program might crash 
*/

char        *my_strchr(const char *str, int c)
{
    int i = 0;
    if (str[0] == (char) c)
        return ((char *) str);
    while (str[i] != '\0')
    {
        if((c == '\0') && (str[i+1] == '\0'))
            return ((char *) str + i + 1);
        if (str[i] == (char)c)
        {
            return ((char *) str + i);
        }
        i++;
    }
    return ((char *) '\0');
}

/* int main()
{
    char no_array[20] = "brezelsosse";
    char yes_array[30] = "raa death is nice lol";
    int c = 100;
    char *ptr;
    ptr = my_strchr(no_array, c);
    //ptr = strchr(no_array, c);
    
    printf("ptr: %s\n", ptr);
} */


