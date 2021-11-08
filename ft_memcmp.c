/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprussen <pprussen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 21:32:29 by pprussen          #+#    #+#             */
/*   Updated: 2021/06/07 11:57:54 by pprussen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	memcmp -- compare byte string
*	DESCRIPTION
*	The memcmp() function compares byte string s1 against byte string s2.
*	Both strings are assumed to be n bytes long.
*	RETURN VALUES
*	The memcmp() function returns zero if the two strings are identical,
*	otherwise returns the difference between the first two differing bytes
*	(treated as unsigned char values, so that `\200' is greater than `\0',
*	for example).  Zero-length strings are always identical.
*	This behavior is not required by C and portable code should only depend 
*	on the sign of the returned value.
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	int				temp;
	unsigned char	*s1_ptr;
	unsigned char	*s2_ptr;

	s1_ptr = (unsigned char *)s1;
	s2_ptr = (unsigned char *)s2;
	i = 0;
	temp = 0;
	while (i < n)
	{
		if (s1_ptr[i] != s2_ptr[i])
		{
			temp = s1_ptr[i] - s2_ptr[i];
			return (temp);
		}
		i++;
	}
	return (temp);
}
