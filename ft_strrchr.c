/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 10:56:47 by antgalan          #+#    #+#             */
/*   Updated: 2022/12/10 21:37:22 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
