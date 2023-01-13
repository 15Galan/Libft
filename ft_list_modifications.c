/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_modifications.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 21:35:28 by antgalan          #+#    #+#             */
/*   Updated: 2023/01/13 01:15:36 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *) malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst && f)
	{
		while (lst)
		{
			f(lst->content);
			lst = lst->next;
		}
	}
}

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
