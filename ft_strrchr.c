/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 10:56:47 by antgalan          #+#    #+#             */
/*   Updated: 2022/12/09 21:39:43 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief	Locates the last occurrence of 'c' (converted to a char) in the
 * 			string pointed to by 'str'. The null-terminating character is
 * 			considered to be part of the string; therefore if 'c' is '\0', the
 * 			functions locate the terminating '\0'.
 * 
 * @param str	Pointer to the string to be searched.
 * @param c		Character to be located.
 * 
 * @return	Pointer to the located character, or NULL if the character does not
 * 			appear in the string.
 */
char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	while (0 <= i)
	{
		if (str[i] == (char) c)
			return ((char *) str + i);
		i--;
	}
	return (NULL);
}
