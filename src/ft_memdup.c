/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sverschu <sverschu@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/10 21:57:30 by sverschu      #+#    #+#                 */
/*   Updated: 2021/03/10 21:57:32 by sverschu      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

void		*ft_memdup(const void *src, size_t n)
{
	void	*dst;

	dst = malloc(n);
	if (dst)
		ft_memcpy(dst, src, n);
	return (dst);
}
