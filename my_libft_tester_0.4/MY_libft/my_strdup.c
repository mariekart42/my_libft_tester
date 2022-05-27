/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmensing <mmensing@wolfsburg.42student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 15:27:56 by mmensing          #+#    #+#             */
/*   Updated: 2022/05/27 22:02:18 by mmensing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief function duplicates a string and return a pointer pointing to the 
 * first byte of copied string 
 * memory reserved with malloc
 * 
 * @param src pointer to string that gets copied
 * @return char* 
 */

char      *my_strdup(char *src)
{
     int       size;
     char      *ptr;
     int       i;
     
     i = 0;
     size = my_strlen(src) + 1;
     ptr = (char *) malloc(size * sizeof(char));
     while (src[i] != '\0')
     {
          ptr[i] = src[i];
          i++;
     }
     ptr[i] = '\0';
     return (ptr);
}

/* int main(void)
{
     char      *pointer;
     char array[30] = "pls kill- ähh copy me";
     pointer = my_strdup (array);
     printf ("%s\n", pointer);
     printf ("%s\n", array);
} */
