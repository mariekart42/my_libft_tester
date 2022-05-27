/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmensing <mmensing@wolfsburg.42student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 17:12:21 by mmensing          #+#    #+#             */
/*   Updated: 2022/05/27 22:02:42 by mmensing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief allocates (with malloc) and returns a copy of s1 with the parts removed that are 
 * the same as the characters in set in the beginning and in the end
 * 
 * 
 * @param s1 string that gets modiefied 
 * @param set string that gets removed in s1
 * @return char pointer to copy of s1 with excluded parts (set) at beginning and end
 */

// ?? what should get returned if string is empty after calling function
// s1 = "ccccccbbbbb";
// set = "cb";

static char *end_cut_func(char *s2, char *set2)
{
	char *ptr = NULL;
	int p = 0;
	int len_s2;
	len_s2 = my_strlen(s2);
	//int max = len_s2;
	while (len_s2 >= 0)
	{
		if (my_strchr(set2, s2[len_s2]) == (char *) '\0')
		{
			//ptr = (char *) malloc(max + 1); // +1 wegen NULL ?
			ptr = my_strdup(s2);
			while (len_s2 >= 0)
			{
				ptr[p] = s2[p];
				p++; 
				len_s2--;
			}
			ptr[p] = '\0';
			return (ptr);
		}
		len_s2--;
	}
	return ((char *) '\0');
}


char *my_strtrim(char const *s1, char const *set)
{
	int i = 0;
	char *ptr2;
	ptr2 = NULL;
	while (s1[i] != '\0')
	{
		if (my_strchr(set, s1[i]) == (char *)'\0')
		{
			return (end_cut_func((char *)s1 + i, (char *)set));    // s1 + i = correct new begin of string
		}
		i++;
	}
	ptr2 = (char *) malloc(1);
	ptr2[0] = '\0';
	return (ptr2);
}


/* int main()
{
	char array[] = "tripouille   xxx";
	char array2[] = "x";
	char *bla;

	bla = my_strtrim(array, array2);
	printf("bla: %s\n", bla);
} */