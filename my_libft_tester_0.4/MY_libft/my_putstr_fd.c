/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmensing <mmensing@wolfsburg.42student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 15:56:32 by mmensing          #+#    #+#             */
/*   Updated: 2022/05/27 22:02:11 by mmensing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Outputs the string ’s’ to the given file descriptor
 * 
 * @param s string to output
 * @param fd given file descriptor
 */

void my_putstr_fd(char *s, int fd)
{
     int i = 0;
     while (s[i] != '\0')
     {
          write(fd, &s[i], 1);
          i++;
     }
}