/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprussen <pprussen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 23:23:57 by pprussen          #+#    #+#             */
/*   Updated: 2021/05/25 10:37:34 by pprussen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	strrchr -- locate character in string
*	DESCRIPTION
*	The strrchr() function locates the last occurrence of c
*	(converted to a char) in the string pointed to by s.
*	The terminating null character is considered to be part of the string; 
*	therefore if c is `\0', the functions locate the terminating `\0'.
*	RETURN VALUES
*	The function strrchr()return a pointer to the located character,
*	or NULL if the character does not appear in the string.
*/

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (0);
}
