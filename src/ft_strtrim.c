/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sverschu <sverschu@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/19 22:01:28 by sverschu      #+#    #+#                 */
/*   Updated: 2020/06/19 22:01:30 by sverschu      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "libft.h"

char			*ft_strtrim(char const *s1, char const *set)
{
	const char	*s1_orig = s1;
	size_t		start;
	size_t		len;
	size_t		ctr;

	if (!s1)
		return (NULL);
	if (!set || !*set)
		return (ft_strdup(s1));
	start = 0;
	while (*s1 && ft_isinset(*s1, set))
	{
		s1++;
		start++;
	}
	len = 0;
	ctr = 0;
	while (*s1)
	{
		ctr++;
		if (!ft_isinset(*s1, set))
			len = ctr;
		s1++;
	}
	return (ft_strsub(s1_orig, start, len));
}
