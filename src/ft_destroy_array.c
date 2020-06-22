/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_destroy_array.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: sverschu <sverschu@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/22 14:38:35 by sverschu      #+#    #+#                 */
/*   Updated: 2020/06/22 14:39:29 by sverschu      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_destroy_array(void **elements, int elem_size, int elem_count)
{
	while (elem_count > 0)
	{
		free(*elements);
		elements += elem_size;
		elem_count--;
	}
	free(elements);
	return (NULL);
}

/*
**void	*ft_arrayclear(void **ptr_array, size_t len)
**{
**	if (!ptr_array)
**		return (NULL);
**	while (len > 0)
**	{
**		free(ptr_array[len - 1]);
**		len--;
**	}
**	free(ptr_array);
**	return (NULL);
**}
*/
