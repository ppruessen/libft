/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprussen <pprussen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 15:38:37 by pprussen          #+#    #+#             */
/*   Updated: 2021/05/26 19:10:24 by pprussen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	tolower -- upper case to lower case letter conversion
*	DESCRIPTION
*	The tolower() function converts an upper-case letter to the corresponding
*	lower-case letter.  The argument must be representable as an unsigned char
*	or the value of EOF.
*	The tolower() function uses the current locale.
*	RETURN VALUES
*	If the argument is an upper-case letter, the tolower() function returns
*	the corresponding lower-case letter if there is one; other-
*	wise, the argument is returned unchanged.
*/

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}
