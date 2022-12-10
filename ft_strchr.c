/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 10:52:46 by antgalan          #+#    #+#             */
/*   Updated: 2022/12/01 10:58:25 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief	Locates the first occurrence of 'c' (converted to a char) in the
 * 			string pointed to by 'str'. The terminating null character is
 * 			considered to be part of the string; therefore if 'c' is '\0', the
 * 			functions locate the terminating '\0'.
 * 
 * @param str	Pointer to the string to be searched.
 * @param c		Character to be located.
 * 
 * @return	Pointer to the located character, or NULL if the character does not
 * 			appear in the string.
 */
char	*ft_strchr(const char *str, int c)
{
	while (*str != (char) c)
	{
		if (!*str++)
			return (NULL);
	}
	return ((char *) str);
}
