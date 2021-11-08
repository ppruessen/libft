/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprussen <pprussen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 20:48:42 by pprussen          #+#    #+#             */
/*   Updated: 2021/06/09 08:54:46 by pprussen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	split -- split a file into pieces
*	DESCRIPTION
*	Allocates (with malloc(3)) and returns an array
*	of strings obtained by splitting ’s’ using the
*	character ’c’ as a delimiter. The array must be
*	ended by a NULL pointer.
*	RETURN VALUES
*	The array of new strings resulting from the split.
*	NULL if the allocation fails.
*/

#include "libft.h"

static int	str_counter(char *s, char c)
{
	int	i;
	int	counter;
	int	in_word;

	in_word = 0;
	i = 0;
	counter = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && in_word == 0)
		{
			counter++;
			in_word = 1;
		}
		if (s[i] == c)
		{
			in_word = 0;
			s[i] = '\0';
		}
		i++;
	}
	return (counter);
}

static void	array_filler(char const *s, char *new_str, char **str_ptr_array)
{
	size_t	i;
	int		in_word;

	in_word = 0;
	i = 0;
	while (i < ft_strlen(s))
	{
		if (new_str[i] != '\0' && in_word == 0)
		{
			in_word = 1;
			*str_ptr_array = ft_strdup(&new_str[i]);
			str_ptr_array++;
		}
		if (new_str[i] == '\0')
		{
			in_word = 0;
		}
		i++;
	}
	*str_ptr_array = NULL;
	return ;
}

char	**ft_split(char const *s, char c)
{
	int		nbr_strings;
	char	**str_ptr_array;
	char	*new_str;

	if (!s)
		return (NULL);
	new_str = ft_strdup(s);
	if (!new_str)
		return (NULL);
	nbr_strings = str_counter(new_str, c);
	str_ptr_array = (char **)malloc(sizeof(char *) * (nbr_strings + 1));
	if (!str_ptr_array)
		return (NULL);
	array_filler(s, new_str, str_ptr_array);
	free(new_str);
	return (str_ptr_array);
}
