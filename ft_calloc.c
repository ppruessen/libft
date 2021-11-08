/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprussen <pprussen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 20:26:00 by pprussen          #+#    #+#             */
/*   Updated: 2021/06/08 14:53:10 by pprussen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	calloc -- memory allocation
*	DESCRIPTION
*	The calloc() function allocate memory.  The allocated memory is aligned 
*	such that it can be used for any data type, 
*	including AltiVec- and SSE-related types.
*	The calloc() function contiguously allocates enough space for count objects 
*	that are size bytes of memory each and returns a pointer to the allocated 
*	memory.  The allocated memory is filled with bytes of value zero.
*	RETURN VALUES
*	If successful, calloc() returns a pointer to allocated memory.
*	If there is an error, they return a NULL pointer and set errno to ENOMEM.
*/

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	i;

	ptr = malloc(size * count);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < (size * count))
	{
		*(char *)(ptr + i) = '\0';
		i++;
	}
	return (ptr);
}
