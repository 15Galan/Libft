/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:43:44 by antgalan          #+#    #+#             */
/*   Updated: 2022/11/30 13:27:11 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief	Checks if the passed character is an alphabetic character.
 * 
 * @param c 	The character to check.
 * 
 * @return	1 if the character is an alphabetic character, 0 otherwise.
 */
int	ft_isalpha(int c)
{
	return ('a' <= c && c <= 'z' || 'A' <= c && c <= 'Z');
}
