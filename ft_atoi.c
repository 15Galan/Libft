/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 11:46:31 by antgalan          #+#    #+#             */
/*   Updated: 2022/12/09 17:29:37 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief	Checks for the white-space characters. In the "C" and "POSIX"
 * 			locales, these are: space, form-feed ('\f'), newline ('\n'),
 * 			carriage return ('\r'), horizontal tab ('\t'), and vertical tab
 * 			('\v').
 * 
 * @param c	Character to be checked.
 * 
 * @return	Non-zero if the character is a white-space character; zero
 * 			otherwise.
 */
int	ft_isspace(int c)
{
	return (c == 32 || (9 <= c && c <= 13));
}

/**
 * @brief	Converts the initial portion of the string pointed to by 'str' to
 * 			integer representation.
 * 
 * @param str	Pointer to the string to be converted.
 * 
 * @return	The converted value.
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
