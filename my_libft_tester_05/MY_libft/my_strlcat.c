/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmensing <mmensing@wolfsburg.42student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 12:15:50 by mmensing          #+#    #+#             */
/*   Updated: 2022/05/27 22:02:25 by mmensing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
function returns size of src + dst (without NUL)
appends whole string src to the end of dest
take whole size of destination buffer not only the size
garantees null termination (as long size > 0 && dest has at least one free space)
size : how many characters of dst gets appended 
[dest(size)] no'\0' [src] '\0' 
*/

size_t    my_strlcat(char *dst, const char *src, size_t len)
{
    char        *d;
    const char        *s;
    size_t        i;
    size_t        d_len;


    d = dst;
    s = (char *) src;
    if(!dst||!src)
        return ((size_t)NULL);

    i = len;
    d_len = 0;
    while ((i != 0) && (*d != '\0'))
    {
        d++;
        i--;
    }
        
    d_len = d - dst;
    i = len - d_len;
    if (i == 0)
        return (d_len + my_strlen(s));
    while (*s != '\0')
    {
        if (i != 1)
            my_strlcpy (d++, s, i--);
            //my_memcpy ((void *)d++, s, i--);
            
    s++;
    }
    *d = '\0';
    return (d_len + (s - src));
}


/* int main()
{
    char s1[]= "Moon";
    char s2[]= "Base";
    size_t size = 4;
    printf("%lu\n", my_strlcat(s1,s2,size));
    printf("%s",s1);
} */