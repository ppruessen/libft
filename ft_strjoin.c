/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprussen <pprussen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 16:16:20 by pprussen          #+#    #+#             */
/*   Updated: 2021/12/09 16:52:55 by pprussen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	strdup -- save a copy of a string
*	DESCRIPTION
*	Allocates (with malloc(3)) and returns a new
*	string, which is the result of the concatenation
*	of ’s1’ and ’s2’.
*	RETURN VALUES
*	The new string. NULL if the allocation fails.
*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	char	*new_str_ptr;
	size_t	len;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	new_str = (char *)malloc(sizeof(char) * len);
	if (!new_str)
		return (NULL);
	new_str_ptr = new_str;
	while (*s1)
	{
		*new_str = *s1;
		s1++;
		new_str++;
	}
	while (*s2)
	{
		*new_str = *s2;
		s2++;
		new_str++;
	}
	*new_str = '\0';
	return (new_str_ptr);
}
