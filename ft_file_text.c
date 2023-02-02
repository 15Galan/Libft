/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_text.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 18:17:01 by antgalan          #+#    #+#             */
/*   Updated: 2023/02/02 16:18:20 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
	return (1);
}

int	ft_putmem_fd(unsigned long long mem, int fd)
{
	int	len;

	len = 0;
	len += ft_putstr_fd("0x", fd);
	len += ft_putunbr_base_fd(mem, "0123456789abcdef", fd);
	return (len);
}

int	ft_putendl_fd(char *s, int fd)
{
	int	len;

	len = 0;
	len += ft_putstr_fd(s, fd);
	len += ft_putchar_fd('\n', fd);
	return (len + 1);
}

int	ft_putstr_fd(char *s, int fd)
{
	int	len;

	if (!s)
		s = "(null)";
	len = ft_strlen(s);
	write(fd, s, len);
	return (len);
}
