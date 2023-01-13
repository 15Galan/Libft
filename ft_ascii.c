/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ascii.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:57:58 by antgalan          #+#    #+#             */
/*   Updated: 2023/01/13 01:07:38 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

int	ft_isalpha(int c)
{
	return (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'));
}

int	ft_isascii(int c)
{
	return (0 <= c && c <= 127);
}

int	ft_isdigit(int c)
{
	return ('0' <= c && c <= '9');
}

int	ft_isprint(int c)
{
	return (32 <= c && c <= 126);
}
