/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmensing <mmensing@wolfsburg.42student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 15:48:45 by mmensing          #+#    #+#             */
/*   Updated: 2022/05/27 22:02:01 by mmensing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Outputs the character ’c’ to the given file descriptor
 * 
 * @param c character to output
 * @param fd given file descriptor
 */

void my_putchar_fd(char c, int fd)
{
     write(fd, &c, 1);
}

