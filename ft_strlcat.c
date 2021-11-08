/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprussen <pprussen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 20:54:38 by pprussen          #+#    #+#             */
/*   Updated: 2021/06/10 18:36:27 by pprussen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	strlcat -- size-bounded string copying and concatenation
*	DESCRIPTION
*	The strlcat() function copy and concatenate strings with the same input
*	parameters and output result as snprintf(3).
*	strlcat() take the full size of the destination buffer and guarantee
*	NUL-termination if there is room.  Note that room for the NUL should be
*	included in dstsize.
*	strlcat() appends string src to the end of dst. It will append at most
*	dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, unless
*	dstsize is 0 or the original dst string was longer than dstsize
*	(in practice this should not happen as it means that either dstsize is
*	incorrect or that dst is not a proper string).
*	If the src and dst strings overlap, the behavior is undefined.
*	RETURN VALUES
*	The strlcat() function returns the total length of the
*	string it tried to create.
*	For strlcat() that means the initial length of dst plus the length of src.
*	If the return value is >= dstsize, the output string has been truncated.
*	It is the caller's responsibility to handle this.
*/

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_size;
	size_t	i;

	dest_size = ft_strlen(dest);
	if (size == 0 || dest_size > size)
		return (ft_strlen(src) + size);
	i = 0;
	while (src[i] != '\0' && (dest_size + i) < size - 1)
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	dest_size = dest_size + ft_strlen(src);
	return (dest_size);
}
