/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 10:10:14 by antgalan          #+#    #+#             */
/*   Updated: 2022/12/13 18:58:57 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
First, the total length of the string it tries to create is calculated.
If this total length is already equal to or greater than the destination size,
then the size of the destination string is returned to avoid alerting the user
that the string has been truncated.
If the total length is less than the destination size, then the length of the
source string is added to the total length, indicating the size of the string
that has been created.
The resulting string is always null-terminated, unless the destination size is 0.
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

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
		i++;
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}
