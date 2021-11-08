/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprussen <pprussen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 12:53:54 by pprussen          #+#    #+#             */
/*   Updated: 2021/05/25 08:59:38 by pprussen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	isalpha -- alphabetic character test
*	DESCRIPTION
*	The isalpha() function tests for any character for which isupper(3) or 
*	islower(3) is true.  The value of the argument must be representable 
*	as an unsigned char or the value of EOF.
*	RETURN VALUES
*	The isalpha() function returns zero if the character tests false and
*	returns non-zero if the character tests true.
*/

int	ft_isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
