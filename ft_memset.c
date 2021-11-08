/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprussen <pprussen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 10:27:56 by pprussen          #+#    #+#             */
/*   Updated: 2021/05/25 10:32:38 by pprussen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	memset -- fill a byte string with a byte value
*	DESCRIPTION
*	The memset() function writes len bytes of value c
*	(converted to an unsigned char) to the string b.
*	RETURN VALUES
*	The memset() function returns its first argument.
*/

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*ptr;

	ptr = s;
	i = 0;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (s);
}
