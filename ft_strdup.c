/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 12:16:55 by antgalan          #+#    #+#             */
/*   Updated: 2022/12/01 12:18:39 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief	Duplicates a string.
 * 
 * @param str	String to be duplicated.
 * 
 * @return	Pointer to the duplicated string.
 */
char	*ft_strdup(const char *str)
{
	char	*dup;
	size_t	len;

	len = ft_strlen(str);
	dup = (char *) malloc(len + 1);
	if (!dup)
		return (NULL);
	ft_memcpy(dup, str, len + 1);
	return (dup);
}
