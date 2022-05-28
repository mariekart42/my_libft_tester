/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmensing <mmensing@wolfsburg.42student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 12:52:16 by mmensing          #+#    #+#             */
/*   Updated: 2022/05/27 22:02:13 by mmensing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Allocates (with malloc(3)) and returns an array of strings obtained 
 * by splitting ’s’ using the character ’c’ as a delimiter. 
 * The array must end with a NULL pointer.
 * 
 * @param s The string to be split.
 * @param c The delimiter character.
 * @return The array of new strings resulting from the split.
 * NULL if the allocation fails.
 */


/* char	*my_substr_mod(char const *s, char *str, unsigned int start, int len)
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
	newstr = my_memcpy(newstr, (char *)(str + start), len);
	newstr[len] = '\0';
	return (newstr);
} */

static char    *sub_dup(const char *str, int start, int finish)
{
    char    *word;
    int        i;

    i = 0;
    word = malloc((finish - start + 1) * sizeof(char));
    while (start < finish)
        word[i++] = str[start++];
    word[i] = '\0';
    return (word);
}


static int amount_subs(const char *s, char c)
{
     int i = 0;
     int subs = 0;
     while(s[i] != '\0')
     {
          if(s[i] == c)
               subs++;
          i++;
     }
     return (subs);
}

char **my_split(char const *s, char c)
{
// str2 -> array of pointers
     char **str2;

     // genius shit, mallocing and check if it fails in one
     if (!s || !(str2 = malloc((amount_subs(s, c) + 2) * sizeof(char *))))
          return (0);

     size_t i = 0;     // iter through *str
     size_t k = 0;     // iter through **str2

     int start = -1;
     // -1 so if very first place in string is the searched character
     // sub_dup function returns 'nothing' and the deliminator 
     // will get skipped

     while (i <= my_strlen(s))
     {
          // if (str[i] == c)
          // {
          //      str2[k] = word_dup(s, start, i);
          //      start = i + 1;
          //      k++;
          // }
          // i++;


          if (s[i] != c && start < 0)     // case for if very fist is the character
			start = i;
		else if ((s[i] == c || i == my_strlen(s)) && start >= 0)
		{
			str2[k] = sub_dup(s, start, i);
			start = -1;
               k++;
		}
		i++;
     }
     
     str2[k] = 0;
     return (str2);
}

/* int main()
{

     char *ptr = "du bist dumm";
     char c = ' ';

     char **brot; 

     brot = my_split(ptr, c);
     //printf("val: %s\n", brot);


     int i = 0;
     while (brot[i] != NULL)
     {
          printf("%s\n", brot[i]);
          i++;
     }
}
 */