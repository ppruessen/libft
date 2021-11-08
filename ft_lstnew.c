/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprussen <pprussen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 14:00:30 by pprussen          #+#    #+#             */
/*   Updated: 2021/06/07 10:41:44 by pprussen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	DESCRIPTION
*	Allocates (with malloc(3)) and returns a new
*	element. The variable ’content’ is initialized
*	with the value of the parameter ’content’. The
*	variable ’next’ is initialized to NULL.
*	RETURN VALUES
*	The new element.
*/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_lst_element;

	new_lst_element = (t_list *)malloc(sizeof(t_list));
	if (!new_lst_element)
		return (NULL);
	new_lst_element->content = content;
	new_lst_element->next = NULL;
	return (new_lst_element);
}
