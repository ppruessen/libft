/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprussen <pprussen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 13:14:46 by pprussen          #+#    #+#             */
/*   Updated: 2021/06/07 14:33:14 by pprussen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	atoi -- convert ASCII string to integer
*	DESCRIPTION
*	The atoi() function converts the initial portion of the string pointed to 
*	by str to int representation.
*/

#include "libft.h"

static int	ft_is_whitespace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t' || c == '\r'
		|| c == '\v' || c == '\f')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int			pos_neg;
	long int	result;

	pos_neg = 1;
	result = 0;
	while (ft_is_whitespace(*str) == 1)
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			pos_neg = -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		result = result * 10 + (*str - 48);
		if (result > 2147483647 && pos_neg == 1)
			return (-1);
		if (result > 2147483648 && pos_neg == -1)
			return (0);
		str++;
	}
	return ((int)result * pos_neg);
}
