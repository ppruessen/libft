/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprussen <pprussen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 14:15:59 by pprussen          #+#    #+#             */
/*   Updated: 2021/05/26 18:24:28 by pprussen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	strncmp -- compare strings
*	DESCRIPTION
*	The strncmp() function lexicographically compare the null-terminated
*	strings s1 and s2.
*	The strncmp() function compares not more than n characters.
*	Because strncmp() is designed for comparing strings rather than binary
*	data, characters that appear after a `\0' character are not compared.
*	RETURN VALUES
*	The strncmp() function returns an integer greater than, equal to, or less
*	than 0, according as the string s1 is greater than, equal to, or less than
*	the string s2.  The comparison is done using unsigned characters,
*	so that `\200' is greater than `\0'.
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		temp;

	i = 0;
	temp = 0;
	while ((i < n) && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			temp = (unsigned char)s1[i] - (unsigned char)s2[i];
			return (temp);
		}
		i++;
	}
	return (temp);
}
