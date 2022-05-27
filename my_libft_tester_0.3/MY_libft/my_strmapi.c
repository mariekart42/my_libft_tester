/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmensing <mmensing@wolfsburg.42student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 18:58:02 by mmensing          #+#    #+#             */
/*   Updated: 2022/05/27 22:02:32 by mmensing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief function calls function f that allocates space for each character of strins s passed to 
 * strmapi, and returns char pointer to it
 * 
 * @param s string of characters
 * @param f function that allocates mem for each character of string s
 * @return char pointer to createt array of pointer
 */


/* char *f(unsigned int n, char c)
{
	// Using malloc, create a 1 + 1 len space in memory
	
}


char *my_strmapi(char const *s, char (*f)(unsigned int, char))
{
	// Get size of s
	int len = 0;
	len = my_strlen((char *)s);

	
	// *ptr[0] = f(index 1, char)
	// 
	
	// Iterate while i < length
		// f(i to be filed, s[i])
		// i++
		
	
} */



/* char f(unsigned int n, char c)
{

	printf("My inner function: index = %d and %c\n", n, c);
	return c - 32;
} */

char *my_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *ptr;
	ptr = (char *) malloc (my_strlen((char *)s) + 1);
	int i = 0;
	while (s[i] != '\0')
	{
		ptr[i] = f(i, s[i]);
		//printf("ptr in func: %c\n", )
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/* int main()
{
	char array[] = "pimpaliukas";
	char *ptr;
	ptr = my_strmapi(array, f);
	printf("ptr: %s\n", ptr);
} */