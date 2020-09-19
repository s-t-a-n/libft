/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strscan.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sverschu <sverschu@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/06 16:55:07 by sverschu      #+#    #+#                 */
/*   Updated: 2020/09/19 20:48:46 by sverschu      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** skip all whitespaces and return new pointer
** ascii 8 to and including 13 ignores most printer related spaces
*/

char	*ft_strscan(char *str)
{
	while (*str && ((*str >= 8 && *str <= 13) || *str == 32))
		str++;
	return (str);
}
