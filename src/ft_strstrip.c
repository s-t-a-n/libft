/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strstrip.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: sverschu <sverschu@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/05 20:36:21 by sverschu      #+#    #+#                 */
/*   Updated: 2020/09/05 21:03:45 by sverschu      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <stdlib.h>
#include "libft.h"

/*
** strdup string ignoring all occurences of char 'c'
** theretofore ft_strfdup
*/

char				*ft_strstrip(const char *s1, char c)
{
	const size_t	dst_len = ft_strlen((char *)s1) + 1;
	char			*dst;
	size_t			ctr;

	dst = malloc(sizeof(char) * (dst_len - ft_strcount(s1, c) + 1));
	if (!dst)
		return (NULL);
	ctr = 0;
	while (*s1)
	{
		if (*s1 != c)
		{
			dst[ctr] = *s1;
			ctr++;
		}
		s1++;
	}
	dst[ctr] = '\0';
	return (dst);
}
