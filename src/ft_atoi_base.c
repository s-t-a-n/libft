/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi_base.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: sverschu <sverschu@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/01 14:45:49 by sverschu      #+#    #+#                 */
/*   Updated: 2020/07/01 17:46:12 by sverschu      ########   odam.nl         */
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

int		ft_atoi_base(const char *str, unsigned int base)
{
	UNTESTED

	unsigned long	retval;
	int				sign;

	if (base < 2 || base > 36)
		return 0;
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
	while (ft_isalnum(*str))
	{
		retval = retval * base + (*str % 16);
		str++;
	}
	return (ft_atoi_handle_sign_and_overflow(retval, sign));
}
