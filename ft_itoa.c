/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 18:00:38 by antgalan          #+#    #+#             */
/*   Updated: 2022/12/09 17:29:20 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief 	Counts the number of digits in an integer.
 * 
 * @param n 	The integer to count the digits of.
 * 
 * @return	Number of digits in the integer.
 */
int	ft_intlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

/**
 * @brief	Converts an integer to a string.
 * 
 * @param n 	The integer to convert.
 * 
 * @return	Pointer to the string.
 */
char	*ft_itoa(int n)
{
	char	*str;
	int		sgn;
	int		len;

	sgn = 1;
	len = ft_intlen(n);
	if (n < 0)
		sgn = -1;
	str = (char *) malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len--)
	{
		str[len] = '0' + (n % 10);
		n /= 10;
	}
	if (sgn == -1)
		str[0] = '-';
	return (str);
}
