/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprussen <pprussen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 23:23:57 by pprussen          #+#    #+#             */
/*   Updated: 2021/05/25 10:36:49 by pprussen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	strchr -- locate character in string
*	DESCRIPTION
*	The strchr() function locates the first occurrence of c
*	(converted to a char) in the string pointed to by s.
*	The terminating null character is considered to be part of the string; 
*	therefore if c is `\0', the functions locate the terminating `\0'.
*	RETURN VALUES
*	The function strchr()return a pointer to the located character,
*	or NULL if the character does not appear in the string.
*/

char	*ft_strchr(const char *s, int c)
{
	int	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if (c == '\0')
		return ((char *)(s + i));
	return (0);
}
