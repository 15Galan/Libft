/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 11:46:31 by antgalan          #+#    #+#             */
/*   Updated: 2022/12/13 17:32:14 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(int c)
{
	return (c == ' ' || (9 <= c && c <= 13));
}

/*
Separates the string into 3 parts: spaces, sign and number.
1. The spaces are ignored, the pointer moves to the first non-space character.
2. The sign is checked: '-' turns the sign to -1; '+' do nothing.
3. The number is converted to an integer.
The integer multiplication by 10 is equivalent to a shift to the left by one
digit, and the addition just places the new digit in the rightmost position;
repeating this process for each digit in the number.

Storing the resulting integer in a long variable avoids overflow.
*/
int	ft_atoi(const char *str)
{
	int		sgn;
	long	res;

	sgn = 1;
	res = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sgn = -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	return (res * sgn);
}
