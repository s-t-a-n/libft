/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_realloc.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sverschu <sverschu@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 14:52:23 by sverschu      #+#    #+#                 */
/*   Updated: 2020/08/07 14:57:36 by sverschu      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, size_t size)
{
	void *nptr;

	if (!ptr)
		return (malloc(size));
	else if (ptr && size == 0)
	{
		free(ptr);
		return (malloc(1));
	}
	else
	{
		nptr = malloc(size);
		if (nptr)
		{
			ft_memcpy(nptr, ptr, size);
			free(ptr);
		}
		return (nptr);
	}
}
