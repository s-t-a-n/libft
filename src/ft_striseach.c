/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_striseach.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: sverschu <sverschu@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/19 22:01:50 by sverschu      #+#    #+#                 */
/*   Updated: 2020/06/19 22:01:52 by sverschu      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	ft_striseach(const char *str, int (*f)(int c))
{
	while (*str)
	{
		if (!f(*str))
			return (FALSE);
	}
	return (TRUE);
}
