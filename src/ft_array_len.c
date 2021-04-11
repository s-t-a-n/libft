/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_array_len.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: sverschu <sverschu@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/22 14:38:35 by sverschu      #+#    #+#                 */
/*   Updated: 2020/06/22 14:39:29 by sverschu      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_array_len(const void **elements)
{
	size_t len;

	len = 0;
	while (elements[len])
		len++;
	return (len);
}
