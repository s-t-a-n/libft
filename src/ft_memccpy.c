/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sverschu <sverschu@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/19 21:57:17 by sverschu      #+#    #+#                 */
/*   Updated: 2020/06/19 21:57:19 by sverschu      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** only copy if dst != src
*/

void	*ft_memccpy(void *dst_, const void *src_, int c, size_t n)
{
	unsigned char		*dst;
	const unsigned char	*src = src_;

	dst = dst_;
	if (dst == src)
		return ((unsigned char *)ft_memchr(dst, c, n) + 1);
	else
		while (n > 0)
		{
			*(unsigned char *)dst = *(unsigned char *)src;
			dst++;
			if (*(unsigned char *)src == (unsigned char)c)
				return (dst);
			src++;
			n--;
		}
	return (NULL);
}
