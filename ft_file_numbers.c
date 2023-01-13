/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_numbers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 18:20:57 by antgalan          #+#    #+#             */
/*   Updated: 2023/01/13 19:19:05 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_fd(int n, int fd)
{
	char	c;
	long	num;
	int		len;

	len = 0;
	num = (long) n;
	if (num < 0)
	{
		len += ft_putchar_fd('-', fd);
		num = -num;
	}
	if (9 < num)
		len += ft_putnbr_fd((int)(num / 10), fd);
	c = (char) '0' + (num % 10);
	len += ft_putchar_fd(c, fd);
	return (len);
}
