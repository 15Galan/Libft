/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 09:58:52 by antgalan          #+#    #+#             */
/*   Updated: 2022/12/13 18:30:37 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
If the source and destination overlap, then the destination it's returned because
the behavior is undefined.
If the source is behind the destination, the function must copy the bytes from
the end to the beginning.
The values must be casted to avoid undefined behavior.
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
