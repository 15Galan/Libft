/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 13:12:38 by antgalan          #+#    #+#             */
/*   Updated: 2022/12/13 19:13:46 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
One counter is used to find the first character to the substring, and other to
find the last character to the substring; the first one is incremented until
the character is not in the set, and the second one is decremented until the
character is not in the set.

The trimmed substring length is the difference between the counters.
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	i;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	end = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (i < end && ft_strchr(set, s1[end - 1]))
		end--;
	res = ft_substr(s1, i, end - i);
	return (res);
}
