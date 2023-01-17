/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_numbers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 18:20:57 by antgalan          #+#    #+#             */
/*   Updated: 2023/01/17 17:02:38 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief   Checks if a base is valid.
 * 			- It has 2 or more elements.
 * 			- It does not contain repeated element.
 * 			- It does not contain '-' or '+'.
 * 
 * @param base  Pointer to the base symbols
 * 
 * @return  1 if it's a valid base;
 * 			0 otherwise. 
 */
static int	is_valid_base(char *base)
{
	int	i;
	int	j;

	if (!*base || !*(base + 1))
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_putnbr_fd(long long n, int fd)
{
	return (ft_putnbr_base_fd(n, "0123456789", fd));
}

int	ft_putnbr_base_fd(long long n, char *base, int fd)
{
	int		len;

	if (!is_valid_base(base))
		return (0);
	len = 0;
	if (n < 0)
	{
		len += ft_putchar_fd('-', fd);
		n *= -1;
	}
	return (len + ft_putunbr_base_fd(n, base, fd));
}

int	ft_putunbr_fd(unsigned long long n, int fd)
{
	return (ft_putunbr_base_fd(n, "0123456789", fd));
}

int	ft_putunbr_base_fd(unsigned long long n, char *base, int fd)
{
	char				c;
	int					len;
	unsigned long long	b;

	if (!is_valid_base(base))
		return (0);
	len = 0;
	b = ft_strlen(base);
	if (b - 1 < n)
		len += ft_putunbr_base_fd(n / b, base, fd);
	c = base[n % b];
	len += ft_putchar_fd(c, fd);
	return (len);
}
