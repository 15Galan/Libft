/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 18:20:57 by antgalan          #+#    #+#             */
/*   Updated: 2022/12/09 20:59:33 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief	Writes the integer 'n' to the given file descriptor.
 * 
 * @param n 	The integer to write.
 * @param fd 	The file descriptor on which to write.
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
