/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmensing <mmensing@wolfsburg.42student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 19:04:22 by mmensing          #+#    #+#             */
/*   Updated: 2022/05/27 22:02:37 by mmensing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
funtion searches for first occurrence of smaller string (str2) in bigger string (str1)
up to the amount of len
returns pointer to position in str if found
returns NULL if not found
returns pointer to first  string if second string is empty
*/
 
char *my_strnstr(const char *str1, const char *str2, size_t len)
{
    size_t i = 0;
    int k = 0;
    if (str2[i] == '\0')
        return ((char *)str1);
    while ((i < len) && (str1[i] != '\0'))
    {
        while (((i + k) < len) && (str2[k] == str1[k + i]))
        {
            if (str2[k + 1] == '\0')
                return ((char *) str1 + i);
            k++;            
        }
        k = 0;  
        i++;
    }
    return ((char *) 0);
}

/* int main()
{
    char array1[20] = "fuck u bitch :)";
    char array2[10] = "fuck";
    char *ptr;
    int size = 9;
    ptr = my_strnstr(array1, array2, size);
    //ptr = strnstr(array1, array2, size);
    printf("ptr: %s", ptr);
}  */
