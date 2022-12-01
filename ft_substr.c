/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 13:04:03 by antgalan          #+#    #+#             */
/*   Updated: 2022/12/01 13:07:30 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief	Allocates and returns a substring from the string 's'.
 * 			The substring begins at index 'start' and is of maximum size 'len'.
 * 
 * @param s		The string from which to create the substring.
 * @param start	The start index of the substring in the string 's'.
 * @param len	The maximum length of the substring.
 * 
 * @return	The substring. NULL if the allocation fails.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	l;

	if (!s)
		return (NULL);
	l = ft_strlen(s);
	if (l <= start)
		return (ft_strdup(""));
	if (l - start < len)
		len = l - start;
	sub = (char *) malloc(len + 1);
	if (!sub)
		return (NULL);
	ft_memcpy(sub, s + start, len);
	sub[len] = '\0';
	return (sub);
}
