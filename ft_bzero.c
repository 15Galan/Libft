/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 09:50:12 by antgalan          #+#    #+#             */
/*   Updated: 2022/12/01 09:50:25 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief	Fills the first n bytes of the memory area pointed to by s with
 * 			zeroes.
 * 
 * @param s 	The memory area to fill.
 * @param n 	The number of bytes to fill.
 * 
 * @return	Nothing.
 */
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
