/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 18:20:57 by antgalan          #+#    #+#             */
/*   Updated: 2022/12/10 21:15:19 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
