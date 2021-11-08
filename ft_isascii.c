/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprussen <pprussen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 12:22:05 by pprussen          #+#    #+#             */
/*   Updated: 2021/05/25 09:01:56 by pprussen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	isascii -- test for ASCII character
*	DESCRIPTION
*	The isascii() function tests for an ASCII character, which is any character
*	between 0 and octal 0177 inclusive.
*/

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
