/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmensing <mmensing@wolfsburg.42student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 00:03:01 by mmensing          #+#    #+#             */
/*   Updated: 2022/05/27 22:02:46 by mmensing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief function allocates (with malloc) and returns a substring
from the string s
substring begins at start and ends with len
 * 
 * @param s string where a subtring gets excluded of
 * @param start start of created substring 
 * @param len end of created substring
 * @return char pointer to allocated mem with subtring
 */

/* char *my_substr(char const *s, unsigned int start, size_t len)

{
     size_t len_sub;
     size_t i = 0;
     char *ptr;

	if (s == NULL)
		return (NULL);

     len_sub = my_strlen((char *)s) - (int)start;
     if((int)start > my_strlen((char *)s))
          return (my_strdup(""));
     ptr = (char *) malloc (len_sub +1);
     if(!ptr)
          return(NULL);


     while (i < len)
     {
          ptr[i] = s[(int)start];
          start++;
          i++;
     }
     ptr[i] = '\0';
     return (ptr);
} */


char	*my_substr(char const *s, unsigned int start, size_t len)
{
	char	*newstr;

	if (s == NULL)
		return (NULL);
	if (start >= my_strlen(s))
		return (my_strdup(""));
	if ((unsigned int)my_strlen(s) < len)
		len = my_strlen(s);
	newstr = malloc(sizeof (char) * (len + 1));
	if (!(newstr))
		return (NULL);
	newstr = my_memcpy(newstr, (char *)(s + start), len);
	newstr[len] = '\0';
	return (newstr);
}


/* int main()
{
     char array[50] = "bro something wrong with you";
     unsigned int start = 3;
     size_t end = 10;
     char *ptr1;
     ptr1 = my_substr(array, start, end);
     printf("subtring: %s\n", ptr1);

} */