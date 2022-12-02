/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 18:00:38 by antgalan          #+#    #+#             */
/*   Updated: 2022/12/02 18:06:49 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
