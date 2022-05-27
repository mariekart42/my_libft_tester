/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmensing <mmensing@wolfsburg.42student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 21:47:21 by mmensing          #+#    #+#             */
/*   Updated: 2022/05/27 22:01:04 by mmensing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
function allocates nitems bytes of memory, each in size of size (int, char etc)
different to malloc, sets all places to '\0'
 */

void *my_calloc(size_t nitems, size_t size)
{
    char *ptr;
    if (size >= 4294967295 || nitems >= 4294967295)
        return(NULL);
    ptr = (char *) malloc (nitems * size);
    size_t i = 0;

    while (i < size * nitems)
    {
        ptr[i] = '\0';
        i++;
    }
    if(ptr[0] == '\0')
        return ((void *)ptr);
    return (NULL);

}

/* 
int main()
{
    char *ptr;
    char array[20] = "diese Brot gut";
    ptr = array;
    int val;
    val = strlen(ptr);
    //ptr = (char *) malloc(val * sizeof(char));
    //ptr = (char *) calloc(val * sizeof(char),sizeof(char));
    ptr = (char *) my_calloc(val * sizeof(char),sizeof(char));
    printf("%s\n", ptr);
} */