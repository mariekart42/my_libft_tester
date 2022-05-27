/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmensing <mmensing@wolfsburg.42student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 16:01:53 by mmensing          #+#    #+#             */
/*   Updated: 2022/05/27 22:02:03 by mmensing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Outputs the string ’s’ to the given file descriptor
followed by a newline.
 * 
 * @param s given string
 * @param fd The file descriptor on which to write
 */

void my_putendl_fd(char *s, int fd)
{
     int i = 0;
     while (s[i] != '\0')
     {
          write (fd, &s[i], 1);
          i++;
     }
     write (fd, "\n", 1);
}