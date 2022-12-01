/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 09:58:52 by antgalan          #+#    #+#             */
/*   Updated: 2022/12/01 10:01:13 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief	Copies 'n' bytes from memory area 'src' to memory area 'dst'.
 * 			The memory areas may overlap: copying takes place as though the
 * 			bytes in 'src' are first copied into a temporary array that does
 * 			not overlap 'src' or 'dst',	and the bytes are then copied from the
 * 			temporary array to 'dst'.
 * 
 * @param dst 	The destination memory area.
 * @param src 	The source memory area.
 * @param n 	The number of bytes to copy.
 * 
 * @return	The original value of 'dst'.
 */
void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dst == src)
		return (dst);
	if (dst < src)
	{
		while (i < n)
		{
			((unsigned char *) dst)[i] = ((unsigned char *) src)[i];
			i++;
		}
	}
	else
	{
		while (0 < n)
		{
			((unsigned char *) dst)[n - 1] = ((unsigned char *) src)[n - 1];
			n--;
		}
	}
	return (dst);
}
