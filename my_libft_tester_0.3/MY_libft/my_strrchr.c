/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmensing <mmensing@wolfsburg.42student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 19:24:08 by mmensing          #+#    #+#             */
/*   Updated: 2022/05/27 22:02:39 by mmensing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
function searches for the LAST occurrence in str for character c
returns NULL if not found
returns pointer to the character if found (pointer points to the place where founc c in str)
if str doesnt end with NUL program might crash lol
*/

char        *my_strrchr(const char *str, int c)
{
    int k = 0;
    while(str[k] != '\0')
        k++;
    //printf("k: %d\n", k);
    //int i = 0;
    while (k >= 0)
    {
        if (str[k] == (char) c)
        {
            return ((char *) str + k);
        }
        k--;
    }
    return ((char *) '\0');
}

/* int main()
{
    //char no_array[20] = "brezelsosse";
    char yes_array[30] = "raa death is nice lol";
    int c = 100;
    char *ptr;
    ptr = my_strrchr(yes_array, c);
    //ptr = strchr(yes_array, c);
    
    printf("ptr: %s\n", ptr);
} */
