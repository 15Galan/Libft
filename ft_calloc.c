/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 12:13:25 by antgalan          #+#    #+#             */
/*   Updated: 2022/12/10 20:31:40 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elms, size_t size)
{
	void	*ptr;

	ptr = malloc(elms * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, elms * size);
	return (ptr);
}
