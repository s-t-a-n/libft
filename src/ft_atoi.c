/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sverschu <sverschu@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/10 19:28:41 by sverschu      #+#    #+#                 */
/*   Updated: 2020/06/10 19:28:42 by sverschu      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "libft.h"

static int	ft_atoi_handle_sign_and_overflow(unsigned long value, int sign)
{
	if (value >= LONG_MAX - 1 && sign == 1)
		return (-1);
	else if (value >= LONG_MAX && sign == -1)
		return (0);
	else
		return ((int)(value * sign));
}

int			ft_atoi(const char *str)
{
	unsigned long	retval;
	int				sign;

	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	retval = 0;
	while (ft_isdigit(*str))
	{
		retval = retval * 10 + (*str % 16);
		str++;
	}
	return (ft_atoi_handle_sign_and_overflow(retval, sign));
}
