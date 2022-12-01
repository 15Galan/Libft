/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 11:20:09 by antgalan          #+#    #+#             */
/*   Updated: 2022/12/01 11:26:15 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief	Locates the first occurrence of 'c' (converted to an unsigned char)
 * 			in string 'str'.
 * 
 * @param str	String to be searched.
 * @param c		Character to be located.
 * 
 * @return	A pointer to the located character, or NULL if the character does
 * 			not appear in the string.
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
