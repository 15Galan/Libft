/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 10:03:19 by antgalan          #+#    #+#             */
/*   Updated: 2022/12/13 19:01:00 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
The resulting string in dst is always null-terminated, unless 'sze' is 0.
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
