/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmensing <mmensing@wolfsburg.42student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 17:31:07 by mmensing          #+#    #+#             */
/*   Updated: 2022/05/27 22:01:21 by mmensing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief converting integer into string
 * 
 * @param n integer that gets convertet
 * @return char pointer to string
 */
 
static int len_func(int n)
{
     int i = 0;

     if (n <= 0)
          i++;
     while (n != 0)
     {
          n /= 10;
          i++;
     }

     return (i);
}

char *my_itoa(int n)
{
     char *ptr;

     int len = 0;
     len = len_func(n);

     ptr = (char *) malloc (len + 1);
     if (!ptr)
          return (NULL);

     int p = 0;
     if (n < 0)
     {
          ptr[0] = '-';
          p = 1;
     }

     ptr[len] = '\0';
     len--;
     while (len+1 > p)
     {
          if (n < 0)
               ptr[len] = n % 10 * (-1) + '0';
          else
               ptr[len] = n % 10 + '0';
          n/=10;
          len--;
     }

return (ptr);
}

/* int main()
{
	int num = -2304;
	char *ptr;
	ptr = my_itoa(num);
	printf("ptr: %s\n", ptr);
} */
 