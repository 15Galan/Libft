/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:53:45 by antgalan          #+#    #+#             */
/*   Updated: 2023/02/02 16:19:14 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	print_data(const char c, va_list args)
{
	char	*hx_lwr;
	char	*hx_upr;

	hx_lwr = "0123456789abcdef";
	hx_upr = "0123456789ABCDEF";
	if (c == 'c')
		return (ft_putchar_fd(va_arg(args, int), 1));
	else if (c == 's')
		return (ft_putstr_fd(va_arg(args, char *), 1));
	else if (c == 'p')
		return (ft_putmem_fd(va_arg(args, unsigned long long), 1));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr_fd(va_arg(args, int), 1));
	else if (c == 'u')
		return (ft_putnbr_fd(va_arg(args, unsigned int), 1));
	else if (c == 'x')
		return (ft_putnbr_base_fd(va_arg(args, unsigned int), hx_lwr, 1));
	else if (c == 'X')
		return (ft_putnbr_base_fd(va_arg(args, unsigned int), hx_upr, 1));
	else if (c == '%')
		return (ft_putchar_fd('%', 1));
	return (0);
}

/*
The acepted format specifiers are:
- %c: Print a single character.
- %s: Print a string of characters.
- %p: Print a pointer address.
- %d: Print a decimal number.
- %i: Print an integer in base 10.
- %u: Print an unsigned decimal number.
- %x: Print a number in hexadecimal using [a-f].
- %X: Print a number in hexadecimal using [A-F].
- %%: Print a percent sign.
*/
int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		len;
	int		i;

	i = 0;
	len = 0;
	va_start(args, str);
	if (write(1, "", 0) == -1)
		return (-1);
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += print_data(str[i + 1], args);
			i++;
		}
		else
			len += ft_putchar_fd(str[i], 1);
		i++;
	}
	va_end(args);
	return (len);
}
