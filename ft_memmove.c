/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprussen <pprussen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 21:50:36 by pprussen          #+#    #+#             */
/*   Updated: 2021/06/07 11:48:24 by pprussen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	memmove -- copy byte string
*	DESCRIPTION
*	The memmove() function copies len bytes from string src to string dst.
*	The two strings may overlap; the copy is always done in a non-
*	destructive manner.
*	RETURN VALUES
*	The memmove() function returns the original value of dst.
*/

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	int	i;

	if (!dest && !src && len != 0)
		return (NULL);
	if (dest > src)
	{
		i = (int)len - 1;
		while (i >= 0)
		{
			*(char *)(dest + i) = *(char *)(src + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (int)len)
		{
			*(char *)(dest + i) = *(char *)(src + i);
			i++;
		}
	}
	return (dest);
}
