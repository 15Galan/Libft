/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 11:53:24 by antgalan          #+#    #+#             */
/*   Updated: 2022/12/01 11:53:48 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief	Checks for the white-space characters. In the "C" and "POSIX"
 * 			locales, these are: space, form-feed ('\f'), newline ('\n'),
 * 			carriage return ('\r'), horizontal tab ('\t'), and vertical tab
 * 			('\v').
 * 
 * @param c	Character to be checked.
 * 
 * @return	Non-zero if the character is a white-space character; zero
 * 			otherwise.
 */
int	ft_isspace(int c)
{
	return (c == 32 || (9 <= c && c <= 13));
}
