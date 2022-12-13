/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 18:20:57 by antgalan          #+#    #+#             */
/*   Updated: 2022/12/13 18:38:41 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Storing the resulting integer in a long variable avoids overflow.
The first characted printed is the sign, if it's '-'.
The rest of the characters are printed recursively starting with the most
significant digit and ending with the least significant digit, because the
function is called recursively with the integer divided by 10.
It's divided by 10 to get all digits except the least significant one, and
then the least significant digit is obtained by the modulo 10.
To get the digit as a character, it's added to the character '0' because the
digits are consecutive characters in the ASCII table and the digit 'x' is
represented by the character "'0' + x".
*/
void	ft_putnbr_fd(int n, int fd)
{
	char	c;
	long	num;

	num = (long) n;
	if (num < 0)
	{
		ft_putchar_fd('-', fd);
		num = -num;
	}
	if (9 < num)
		ft_putnbr_fd((int)(num / 10), fd);
	c = (char) '0' + (num % 10);
	ft_putchar_fd(c, fd);
}
