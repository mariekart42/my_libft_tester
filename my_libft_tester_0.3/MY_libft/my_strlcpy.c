/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmensing <mmensing@wolfsburg.42student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 01:29:03 by mmensing          #+#    #+#             */
/*   Updated: 2022/05/27 22:02:27 by mmensing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief 
 * gets null-terminated
 * If the src and dst strings overlap, the behavior is undefined
 * @param dst 
 * @param src 
 * @param size len that gets copied, space for NULL should already be includec
 * @return size_t total len of string function tried to create
 */

size_t    my_strlcpy(char *dst, const char *src, size_t size)
{
    size_t    i;
    size_t    counter;

    i = 0;
    counter = 0;
    if(!dst || !src)
    {
        return 0;
    }
    while (src[counter] != '\0')
    {
        counter++;
    }
    if (size == 0)
    {
        return (counter);
    }
    while(i < size - 1 && src[i] != '\0')
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (counter);
}

/* int main(void)
{
    char    dst[14] = "3a";
    char    src[16] = "lorrem";
    size_t    n = 6;
 
     size_t val;
     //val = strlcpy(dst, src, n);
     val = my_strlcpy(dst, src, n);
     printf("val: %zu\n", val);
}  */