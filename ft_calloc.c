/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 12:13:25 by antgalan          #+#    #+#             */
/*   Updated: 2022/12/01 12:15:54 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief	Allocates memory for an array of 'elms' elements of 'size' bytes.
 * 			The memory is set to zero.
 * 
 * @param elms	Number of elements.
 * @param size	Size of each element.
 * 
 * @return	Pointer to the allocated memory.
 */
void	*ft_calloc(size_t elms, size_t size)
{
	void	*ptr;

	ptr = malloc(elms * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, elms * size);
	return (ptr);
}
