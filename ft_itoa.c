/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 18:00:38 by antgalan          #+#    #+#             */
/*   Updated: 2022/12/13 17:38:59 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Counting the digits of a number is equivalent to dividing it by 10 repeatedly.
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

/*
First, the length of the number is needed to allocate the memory for the string.
Then, the sign is checked: if the number is negative, the first character of the
string is set to '-' and the number is turned to positive.
The number is converted to a string by dividing it by 10 and taking the remainder
as a digit. The digits are placed in the string from the end to the beginning.
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
