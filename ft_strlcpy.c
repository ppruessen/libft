/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprussen <pprussen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 10:57:37 by pprussen          #+#    #+#             */
/*   Updated: 2021/06/10 18:33:23 by pprussen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	strlcpy -- size-bounded string copying and concatenation
*	DESCRIPTION
*	The strlcpy() function copy and concatenate strings with the same input
*	parameters and output result as snprintf(3).
*	They are designed to be safer, more consistent, and less error prone
*	replacements for the easily misused functions strncpy(3) and strncat(3).
*/

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	result;

	if (!src || !dest)
		return (0);
	result = ft_strlen(src);
	if (size == 0)
		return (result);
	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (result);
}
