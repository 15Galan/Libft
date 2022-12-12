/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 11:40:18 by antgalan          #+#    #+#             */
/*   Updated: 2022/12/13 01:39:13 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
