/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprussen <pprussen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 18:13:28 by pprussen          #+#    #+#             */
/*   Updated: 2021/05/25 08:52:31 by pprussen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	bzero -- write zeroes to a byte string
*	DESCRIPTION
*	The bzero() function writes n zeroed bytes to the string s.
*	If n is zero, bzero() does nothing.
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*ptr;

	ptr = s;
	i = 0;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}
