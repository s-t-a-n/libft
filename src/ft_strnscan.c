/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnscan.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: sverschu <sverschu@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/06 16:57:32 by sverschu      #+#    #+#                 */
/*   Updated: 2020/09/06 16:58:09 by sverschu      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** skip all whitespaces and return new pointer
*/

char	*ft_strnscan(char *str, size_t n)
{
	while (*str && n > 0 && ((*str > 9 && *str < 13) || *str == 32))
	{
		str++;
		n--;
	}
	return(str);
}
