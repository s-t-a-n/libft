/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_arraylen.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: sverschu <sverschu@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/22 14:38:35 by sverschu      #+#    #+#                 */
/*   Updated: 2020/06/22 14:39:29 by sverschu      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_arraylen(void *_elements, int elem_size)
{
	size_t len;
	const unsigned char *elements = (unsigned char *)_elements;

	len = 0;
	while (elements)
	{
		elements += elem_size;
		len++;
	}
	return (len);
}
