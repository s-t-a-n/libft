/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnscan.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: sverschu <sverschu@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/06 16:57:32 by sverschu      #+#    #+#                 */
/*   Updated: 2020/09/19 20:48:05 by sverschu      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** skip all whitespaces and return new pointer
** ascii 8 to and including 13 ignores most printer related spaces
*/

char	*ft_strnscan(char *str, size_t n)
{
	while (*str && n > 0 && ((*str >= 8 && *str <= 13) || *str == 32))
	{
		str++;
		n--;
	}
	return (str);
}
