/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprussen <pprussen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 12:27:55 by pprussen          #+#    #+#             */
/*   Updated: 2021/05/25 08:58:11 by pprussen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	isalnum -- alphanumeric character test
*	DESCRIPTION
*	The isalnum() function tests for any character for which isalpha(3) or 
*	isdigit(3) is true.  The value of the argument must be representable
*	as an unsigned char or the value of EOF.
*	RETURN VALUES
*	The isalnum() function returns zero if the character tests false and
*	returns non-zero if the character tests true.
*/

int	ft_isalnum(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
