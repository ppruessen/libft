/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprussen <pprussen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 12:59:09 by pprussen          #+#    #+#             */
/*   Updated: 2021/06/07 10:45:37 by pprussen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	DESCRIPTION
*	Iterates the list ’lst’ and applies the function
*	’f’ to the content of each element. Creates a new
*	list resulting of the successive applications of
*	the function ’f’. The ’del’ function is used to
*	delete the content of an element if needed.
*	RETURN VALUES
*	The new list. NULL if the allocation fails.
*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*temp;

	new_list = NULL;
	if (!lst)
		return (NULL);
	while (lst != 0)
	{
		temp = ft_lstnew((*f)(lst->content));
		if (!temp)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, temp);
		lst = lst->next;
	}
	return (new_list);
}
