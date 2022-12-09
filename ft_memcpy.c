/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 09:53:01 by antgalan          #+#    #+#             */
/*   Updated: 2022/12/09 21:22:27 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief	Copies 'n' bytes from memory area 'src' to memory area 'dst'.
 * 			The memory areas must not overlap. Use ft_memmove() if the memory
 * 			areas do overlap.
 * 
 * @param dst 	The destination memory area.
 * @param src 	The source memory area.
 * @param n 	The number of bytes to copy.
 * 
 * @return	The pointer to 'dst'.
 */
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst && !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		((unsigned char *) dst)[i] = ((unsigned char *) src)[i];
		i++;
	}
	return (dst);
}
