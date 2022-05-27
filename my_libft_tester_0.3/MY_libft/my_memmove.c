/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmensing <mmensing@wolfsburg.42student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 13:49:46 by mmensing          #+#    #+#             */
/*   Updated: 2022/05/27 22:01:56 by mmensing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
function copies src(str2) into dest(str1) array
does not check the validity of the destination buffer
copies the data first to an intermediate buffer, then from the buffer to destination
-> similar to memcpy but better
*/

void *my_memmove(void *str1, const void *str2, size_t n)
{
    char *des;
    const char *sr;
    
    des = (char *) str1;
    sr = (const char *) str2;
    
    char *temp;
    char array[40];
    temp = array;
    unsigned int i = 0;
    
    while (i < n)
    {
        temp[i] = sr[i];
        i++;
    }
    i = 0;
    while(i < n)
    {
        des[i] = temp[i];
        i++;
    }
    return (des);
}

/* int main()
{
    char src[30] = "stol z powylamywanymi nogami";
    char dest[20] = "a";
    //printf("before: %s\n", dest);

    my_memmove(dest, src, 18);
    printf("after: %s\n", dest);
    
    
    char src2[30] = "stol z powylamywanymi nogami";
    char dest2[20] = "a";
    memmove(dest2, src2, 18);
    printf("memmove: %s\n", dest2);

} */