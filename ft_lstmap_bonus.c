/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 11:40:18 by antgalan          #+#    #+#             */
/*   Updated: 2022/12/13 18:21:42 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Only the first two arguments must be non-NULL, because the third argument it's
used only if needed.
There are 3 points where the function can fail:
1. If 'f' allocates memory, it must be freed if the function fails. The function
   aplication must be done before the new node creation to reference the memory.
2. If the new node can't be created, the function must free all the nodes.
3. If the function fails, the function must free all the nodes and the new
   content created by 'f'.
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*aux;
	void	*con;

	if (!lst || !f)
		return (NULL);
	new = NULL;
	while (lst)
	{
		con = f(lst->content);
		if (!con)
			break ;
		aux = ft_lstnew(con);
		if (!aux)
			break ;
		ft_lstadd_back(&new, aux);
		lst = lst->next;
	}
	if (lst)
	{
		ft_lstclear(&new, del);
		del(con);
		return (NULL);
	}
	return (new);
}
