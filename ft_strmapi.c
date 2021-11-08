/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprussen <pprussen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 09:00:12 by pprussen          #+#    #+#             */
/*   Updated: 2021/06/01 15:28:46 by pprussen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	
*	DESCRIPTION
*	Applies the function ’f’ to each character of the
*	string ’s’ to create a new string (with malloc(3))
*	resulting from successive applications of ’f’.
*	RETURN VALUES
*	The string created from the successive applications
*	of ’f’. Returns NULL if the allocation fails.
*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*temp;
	unsigned int	index;

	if (!s || !f)
		return (0);
	temp = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!temp)
		return (0);
	index = 0;
	while (s[index] != '\0')
	{
		temp[index] = f(index, s[index]);
		index++;
	}
	temp[index] = '\0';
	return (temp);
}
