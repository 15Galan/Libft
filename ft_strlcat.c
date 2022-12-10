/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 10:10:14 by antgalan          #+#    #+#             */
/*   Updated: 2022/12/01 10:14:17 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief	Appends the NULL-terminated string 'src' to the end of 'dst'.
 * 			It will append at most sze - strlen(dst) - 1 bytes,
 * 			NULL-terminating the result.
 * 
 * @param dst 	The destination string.
 * @param src 	The source string.
 * @param sze 	The size of the destination string.
 * 
 * @return	The total length of the string it tried to create.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t sze)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < sze)
		i++;
	while (src[j] && i + j + 1 < sze)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < sze)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
