/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmensing <mmensing@wolfsburg.42student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 16:08:16 by mmensing          #+#    #+#             */
/*   Updated: 2022/05/27 22:02:06 by mmensing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Outputs the integer ’n’ to the given file descriptor
 * 
 * @param n given int to output
 * @param fd file descriptor where to write on
 */
 
void      my_putnbr_mod(int nb, int fd)
{
     if (nb == -2147483648 )
     {
          write (fd, "-2147483648", 11);
          return ;
     }
     if (nb < 0)
     {
          write (fd, "-", 1);
          nb *= -1;
     }
     if (nb > 9)
     {
          my_putnbr_mod (nb / 10, fd);
          my_putnbr_mod (nb % 10, fd);
     }
     if (nb <= 9)
     {
          nb = nb + '0';
          write (fd, &nb, 1);
     }
}

void my_putnbr_fd(int n, int fd)
//void my_putnbr_fd(int n)
{
/* 	char      *ptr;
	int       i; */

	my_putnbr_mod(n, fd);
/* 
	ptr = my_itoa(n);
	i = 0;
	while (ptr[i] != '\0')
	{
		write (fd, &ptr[i], 1);
		//write (1, &ptr[i], 1);
		i++;
	} */
}

/* void	my_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		my_putstr_fd("-2147483648", fd);
	else
	{
		if (n < 0)
		{
			my_putchar_fd('-', fd);
			n = n * -1;
		}
		if (n >= 9)
		{
			my_putnbr_fd(n / 10, fd);
		}
		my_putchar_fd((n % 10) + '0', fd);
	}
} */

/* int main(void)
{
     int n = 2434;
     my_putnbr_fd(n);
} */