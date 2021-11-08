/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprussen <pprussen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 19:27:25 by pprussen          #+#    #+#             */
/*   Updated: 2021/05/26 19:11:53 by pprussen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	toupper -- lower case to upper case letter conversion
*	DESCRIPTION
*	The toupper() function converts an lower-case letter to the corresponding
*	upper-case letter.  The argument must be representable as an unsigned char
*	or the value of EOF.
*	The toupper() function uses the current locale.
*	RETURN VALUES
*	If the argument is an lower-case letter, the toupper() function returns
*	the corresponding upper-case letter if there is one; other-
*	wise, the argument is returned unchanged.
*/

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}
