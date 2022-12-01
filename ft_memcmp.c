/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 11:34:19 by antgalan          #+#    #+#             */
/*   Updated: 2022/12/01 11:37:42 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief	Compares byte string 's1' against byte string 's2'.
 * 			Both strings are assumed to be 'n' bytes long.
 * 
 * @param s1	Pointer to the first byte string.
 * @param s2	Pointer to the second byte string.
 * @param n		Number of bytes to be compared.
 * 
 * @return	'0' if the two strings are identical, the difference (number) between
 * 			the first two differing bytes otherwise.
 * 			Zero-length (empty) strings are always identical.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	unsigned int	i;

	i = 0;
	p1 = (unsigned char *) s1;
	p2 = (unsigned char *) s2;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}
