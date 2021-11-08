/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprussen <pprussen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 12:42:50 by pprussen          #+#    #+#             */
/*   Updated: 2021/05/25 09:03:44 by pprussen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	isdigit -- decimal-digit character test
*	DESCRIPTION
*	The isdigit() function tests for a decimal digit character.
*	RETURN VALUES
*	The isdigit() function return zero if the character tests 
*	false and return non-zero if the character tests true.
*/

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
