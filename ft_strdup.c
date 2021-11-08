/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprussen <pprussen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 21:02:59 by pprussen          #+#    #+#             */
/*   Updated: 2021/05/25 10:40:56 by pprussen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	strdup -- save a copy of a string
*	DESCRIPTION
*	The strdup() function allocates sufficient memory for a copy of the
*	string s1, does the copy, and returns a pointer to it.
*	The pointer may subsequently be used as an argument to the function free(3).
*	If insufficient memory is available, NULL is returned and
*	errno is set to ENOMEM.
*/

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	i = ft_strlen(s1);
	ptr = (char *)malloc(i + 1);
	if (ptr == NULL)
		return (NULL);
	j = 0;
	while (j <= i)
	{
		ptr[j] = s1[j];
		j++;
	}
	return (ptr);
}
