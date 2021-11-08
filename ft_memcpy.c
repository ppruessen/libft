/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprussen <pprussen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 10:17:18 by pprussen          #+#    #+#             */
/*   Updated: 2021/06/07 11:46:00 by pprussen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	memcpy -- copy memory area
*	DESCRIPTION
*	The memcpy() function copies n bytes from memory area src to
*	memory area dst.  If dst and src overlap, behavior is undefined. Appli-
*	cations in which dst and src might overlap should use memmove(3) instead.
*	RETURN VALUES
*	The memcpy() function returns the original value of dst.
*/

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dest_ptr;
	char	*src_ptr;

	if (!dest && !src && n != 0)
		return (NULL);
	dest_ptr = dest;
	src_ptr = (char *)src;
	i = 0;
	while (i < n)
	{
		dest_ptr[i] = src_ptr[i];
		i++;
	}
	return (dest);
}
