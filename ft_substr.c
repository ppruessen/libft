/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprussen <pprussen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 15:06:38 by pprussen          #+#    #+#             */
/*   Updated: 2021/06/10 13:21:13 by pprussen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	DESCRIPTION
*	Allocates (with malloc(3)) and returns a substring
*	from the string ’s’.
*	The substring begins at index ’start’ and is of
*	maximum size ’len’.
*	RETURN VALUES
*	The substring. NULL if the allocation fails.
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*new_str;
	unsigned int	str_len;

	if (!s)
		return (NULL);
	str_len = ft_strlen(s);
	if (str_len < start)
	{
		new_str = (char *)malloc(sizeof(char));
		if (!new_str)
			return (NULL);
		new_str[0] = '\0';
		return (new_str);
	}
	if (str_len < len)
		len = ft_strlen(s);
	new_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!new_str)
		return (NULL);
	ft_memcpy(new_str, &s[start], len);
	new_str[len] = '\0';
	return (new_str);
}
