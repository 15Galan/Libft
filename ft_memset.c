/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 13:51:59 by antgalan          #+#    #+#             */
/*   Updated: 2022/11/30 13:57:35 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief	Fills the first n bytes of the memory area pointed to by s with the
 * 			constant byte c.
 * 
 * @param s 	The memory area to fill.
 * @param c 	The constant byte to fill the memory area with.
 * @param n 	The number of bytes to fill.
 * 
 * @return	The memory area pointed to by s.
 */
void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
		((unsigned char *) s)[i++] = (unsigned char) c;
	return (s);
}
