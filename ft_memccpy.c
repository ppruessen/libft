/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprussen <pprussen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 18:34:50 by pprussen          #+#    #+#             */
/*   Updated: 2021/06/12 11:28:12 by pprussen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	memccpy -- copy string until character found
*	DESCRIPTION
*	The memccpy() function copies bytes from string src to string dst.
*	If the character c (as converted to an unsigned char) occurs in
*	the string src, the copy stops and a pointer to the byte after the
*	copy of c in the string dst is returned.  Otherwise, n bytes are copied,
*	and a NULL pointer is returned.
*	The source and destination strings should not overlap,
*	as the behavior is undefined.
*/

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
		if (*(unsigned char *)(src + i) == (unsigned char)c)
		{
			return (dst + i + 1);
		}
		i++;
	}
	return (0);
}
