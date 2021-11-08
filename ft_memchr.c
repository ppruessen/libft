/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprussen <pprussen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 21:17:25 by pprussen          #+#    #+#             */
/*   Updated: 2021/06/10 12:30:44 by pprussen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	memchr -- locate byte in byte string
*	DESCRIPTION
*	The memchr() function locates the first occurrence of c
*	(converted to an unsigned char) in string s.
*	RETURN VALUES
*	The memchr() function returns a pointer to the byte located,
*	or NULL if no such byte exists within n bytes.
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
		{
			return ((void *)(ptr + i));
		}
		i++;
	}
	return (NULL);
}
