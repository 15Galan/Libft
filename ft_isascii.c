/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 12:24:41 by antgalan          #+#    #+#             */
/*   Updated: 2022/11/30 13:32:35 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief	Checks if the passed character is an ASCII character.
 * 
 * @param c 	The character to check.
 * 
 * @return	1 if the character is an ASCII character, 0 otherwise.
 */
int	ft_isascii(int c)
{
	return (0 <= c && c <= 127);
}
