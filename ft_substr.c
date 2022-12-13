/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 13:04:03 by antgalan          #+#    #+#             */
/*   Updated: 2022/12/13 19:08:58 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
The substring is a part of the string, therefore it's delimited by a start
index and an end index, wich can't be greater than the length of the string.

That's why 'total length - start' is used to determine the length of the
substring, because if it's greater than the length of the string, the substring
will be the rest of the string.
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
