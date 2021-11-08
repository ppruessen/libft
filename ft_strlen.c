/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprussen <pprussen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 13:04:39 by pprussen          #+#    #+#             */
/*   Updated: 2021/05/26 18:20:18 by pprussen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	strlen -- find length of string
*	DESCRIPTION
*	The strlen() function computes the length of the string s.
*	The strnlen() function attempts to compute the length of s, but never
*	scans beyond the first maxlen bytes of s.
*	RETURN VALUES
*	The strlen() function returns the number of characters that precede the
*	terminating NUL character. 
*/

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
