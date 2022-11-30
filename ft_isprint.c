/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 12:47:18 by antgalan          #+#    #+#             */
/*   Updated: 2022/11/30 13:33:35 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief	Checks if the passed character is a printable character.
 * 
 * @param c 	The character to check.
 * 
 * @return	1 if the character is a printable character, 0 otherwise.
 */
int	ft_isprint(int c)
{
	return (32 <= c && c <= 126);
}
