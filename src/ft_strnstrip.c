/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strstrip.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: sverschu <sverschu@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/05 20:34:21 by sverschu      #+#    #+#                 */
/*   Updated: 2020/09/05 21:01:21 by sverschu      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include <stdlib.h>
#include "libft.h"

/*
** strdup string igoring occurences of 'c' after 'n' hits
*/
char			*ft_strnstrip(const char *s1, char c, unsigned int n)
{
	const size_t	dst_len = ft_strlen((char *)s1) + 1;
	char			*dst;
	size_t			ctr;
	uint8_t			flip;

	printf("len : %zu, reduced len : %lu\n", dst_len,dst_len - ft_strncount(s1, c, 1));

	dst = malloc(sizeof(char) * (dst_len - ft_strncount(s1, c, 1)));
	if (!dst)
		return (NULL);
	ctr = 0;
	flip = 0;
	while (*s1)
	{
		if (*s1 != c || flip < n)
		{
			dst[ctr] = *s1;
			ctr++;
		}
		if (*s1 == c)
			flip++;
		else if (*s1 != c)
			flip = 0;
		s1++;
	}
	dst[ctr] = '\0';
	return (dst);
}
