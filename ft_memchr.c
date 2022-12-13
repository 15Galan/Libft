/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 11:20:09 by antgalan          #+#    #+#             */
/*   Updated: 2022/12/13 18:23:51 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
The arguments must be casted to avoid undefined behavior.
*/
void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*p;
	unsigned int	i;

	i = 0;
	p = (unsigned char *) str;
	while (i < n)
	{
		if (p[i] == (unsigned char) c)
			return (p + i);
		i++;
	}
	return (NULL);
}
