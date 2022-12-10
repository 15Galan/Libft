/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 18:00:38 by antgalan          #+#    #+#             */
/*   Updated: 2022/12/09 20:30:05 by antgalan         ###   ########.fr       */
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
	long	num;
	int		len;

	num = (long) n;
	len = ft_intlen(num);
	str = (char *) malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[0] = '0';
	str[len] = '\0';
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (num)
	{
		str[--len] = '0' + num % 10;
		num /= 10;
	}
	return (str);
}
