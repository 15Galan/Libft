/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 11:07:14 by antgalan          #+#    #+#             */
/*   Updated: 2022/12/09 17:23:51 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief	Compares not more than 'n' characters. Because strncmp() is designed
 * 			for comparing strings rather than binary data, characters that appear
 * 			after a '\0' character are not compared.
 * 
 * @param s1	First string to be compared.
 * @param s2	Second string to be compared.
 * @param n		Number of characters to be compared.
 * 
 * @return	The difference (number) between the first two different characters.
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
		i++;
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}
