/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmensing <mmensing@wolfsburg.42student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 14:24:05 by mmensing          #+#    #+#             */
/*   Updated: 2022/05/27 22:01:54 by mmensing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief memcpy() copies 'n' bytes from memory area 'src' to memory area 'dst'
 * If 'dst' and 'src' overlap, behavior is undefined.  
 * (Applications in which 'dst' and 'src' might overlap should use memmove(3) instead)
 * 
 * @param dest where stuff gets copied to
 * @param src stuff from src gets copied in dest
 * @param n amount of bytest that get copied
 * @return void* dst (no NULL at end)
 */
void    *my_memcpy(void *dest, const void *src, size_t n)
{
    char        *sr;
    sr = (char *) src;
    char *des;
    des = (char *) dest;
    
    size_t i = -1;      //weird shit but working lol
    if ((src != NULL) || (dest != NULL))
	{
		while (++i < n)
		{
			des[i] = sr[i];
		}
	}
    return (des);
}

/* void	*my_memcpy(void *dst, const void *src, size_t n)
{
	size_t		count;
	char		*csrc;
	char		*cdest;

	csrc = (char *)src;
	cdest = (char *)dst;
	count = -1;
	if ((src != NULL) || (dst != NULL))
	{
		while (++count < n)
		{
			cdest[count] = csrc[count];
		}
	}
	return (dst);
} */


/* int main()
{
    char array1[20] = "du bist behindert";
    char array2[10];
    unsigned int size = 10;
    my_memcpy(array2, array1, size);
    printf("mine dest: %s\n", array2);

    memcpy(array2, array1, size);
    printf("ori dest: %s\n", array2);
}
 */