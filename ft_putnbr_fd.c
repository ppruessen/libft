/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprussen <pprussen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 19:50:20 by pprussen          #+#    #+#             */
/*   Updated: 2021/06/07 19:04:01 by pprussen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	DESCRIPTION
*	Outputs the integer ’n’ to the given file descriptor.
*	RETURN VALUES
*	None.
*/

#include "libft.h"

static int	ft_get_divisor(int n)
{
	int	divisor;

	if (n == 0)
		return (1);
	divisor = 1000000000;
	while (n / divisor == 0)
		divisor /= 10;
	return (divisor);
}

void	ft_putnbr_fd(int n, int fd)
{
	int			divider;
	long int	temp;
	long int	result;

	temp = n;
	if (temp < 0)
	{
		ft_putchar_fd('-', fd);
		temp = temp * -1;
	}
	divider = ft_get_divisor(temp);
	while (divider != 1)
	{
		result = temp / divider;
		ft_putchar_fd((result + '0'), fd);
		temp = temp - (result * divider);
		divider /= 10;
	}
	ft_putchar_fd((temp + '0'), fd);
}
