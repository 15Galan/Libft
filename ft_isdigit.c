/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:51:02 by antgalan          #+#    #+#             */
/*   Updated: 2022/11/30 13:30:42 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief	Checks if the passed character is a digit.
 * 
 * @param c 	The character to check.
 * 
 * @return	1 if the character is a digit, 0 otherwise.
 */
int	ft_isdigit(int c)
{
	return ('0' <= c && c <= '9');
}
