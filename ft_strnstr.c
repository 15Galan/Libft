/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 11:40:03 by antgalan          #+#    #+#             */
/*   Updated: 2022/12/01 11:44:19 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief	Locates the first occurrence of the null-terminated string 'needle'
 * 			in the string 'haystack', searching not more than 'len' characters.
 * 			Characters that appear after a '\0' character are not searched.
 * 
 * @param haystack	String containing the sequence of characters to match.
 * @param needle	String to be searched.
 * @param len		Maximum number of characters to be searched.
 * 
 * @return	A pointer to the beginning of the located substring, or NULL if the
 * 			substring is not found.
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*needle)
		return ((char *) haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && i + j < len)
		{
			if (!needle[j + 1])
				return ((char *) haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
