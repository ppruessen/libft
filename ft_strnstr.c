/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprussen <pprussen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 15:46:41 by pprussen          #+#    #+#             */
/*   Updated: 2021/06/07 13:38:30 by pprussen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	strnstr -- locate a substring in a string
*	DESCRIPTION
*	The strstr() function locates the first occurrence of the null-terminated
*	string needle in the null-terminated string haystack.
*	The strnstr() function locates the first occurrence of the null-terminated
*	string needle in the string haystack, where not more than len characters
*	are searched.  Characters that appear after a `\0' character are not
*	searched.  Since the strnstr() function is a FreeBSD specific API, it
*	should only be used when portability is not a concern.
*	RETURN VALUES
*	If needle is an empty string, haystack is returned; if needle occurs nowhere
*	in haystack, NULL is returned; otherwise a pointer to the
*	first character of the first occurrence of needle is returned.
*/

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	len_needle;

	if (*needle == '\0')
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	len_needle = 0;
	while (needle[len_needle] != '\0')
		len_needle++;
	i = 0;
	while (haystack[i] != '\0' && i <= (len - len_needle))
	{
		j = 0;
		while (needle[j] == haystack[i + j])
		{
			if ((needle[j + 1]) == '\0')
				return ((char *)haystack + i);
			j++;
		}
		i++;
	}
	return (0);
}
