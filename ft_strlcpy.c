/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 10:03:19 by antgalan          #+#    #+#             */
/*   Updated: 2022/12/01 10:07:55 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief	Copies up to size - 1 characters from the NULL-terminated string
 * 			'src' to 'dst', NULL-terminating the result.
 * 
 * @param dst 	The destination string.
 * @param src 	The source string.
 * @param sze 	The size of the destination string.
 * 
 * @return	The total length of the string 'src'.
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t sze)
{
	size_t	i;

	i = 0;
	if (sze != 0)
	{
		while (src[i] && i < sze - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
