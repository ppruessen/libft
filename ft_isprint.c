/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprussen <pprussen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 11:44:25 by pprussen          #+#    #+#             */
/*   Updated: 2021/06/07 12:05:31 by pprussen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	isprint -- printing character test (space character inclusive)
*	DESCRIPTION
*	The isprint() function tests for any printing character,
*	including space (` ').  The value of the argument must be representable
*	as an unsigned char or the value of EOF.
*	RETURN VALUES
*	The isprint() function returns zero if the character tests false and
*	returns non-zero if the character tests true.
*/

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (c);
	return (0);
}
