/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmensing <mmensing@wolfsburg.42student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 21:07:06 by mmensing          #+#    #+#             */
/*   Updated: 2022/05/27 22:00:48 by mmensing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief function converts string argument to integer type(returns int)
 * stops if it reaches a no digit character, or a not '-' '+' character
 * spaces & tabs are okay only BEFORE argument
 * valid arguments: "423", "-273", "+765", "   -765"
 * @param str char string
 * @return int converted char string if given argument is valid, else returns 0
 */

int my_atoi(const char  *str)
{
	int val;
	int minus;
	int i;

	val = 0;
	minus = 1;
	i = 0;
	while ((str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		minus = -1;
		i++;
	}
	else if (str[i] == '+')
	{
		i++;
	}
	while (str[i] != '\0' && (str[i] >= 48 && str[i] <= 57)) 
	{
		val = 10 * val + str[i] - 48;
		i++;
	}
	return (val * minus);
	}

/* int main()
{
		char array[20] = "-587";

		int ori;
		ori = atoi(array);
		printf("ori: %d\n", ori);

		int mine;
		mine = my_atoi(array);
		printf("mine: %d\n", mine);


		//printf("mine: %s\n", mine);

} */
