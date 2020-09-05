/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncount.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: sverschu <sverschu@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/05 20:39:30 by sverschu      #+#    #+#                 */
/*   Updated: 2020/09/05 21:04:00 by sverschu      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <stdint.h>

/*
** count occurenced of 'c' if they occur more than 'n' sequentially
*/

size_t		ft_strncount(const char *s1, char c, unsigned int n)
{
	size_t	ctr;
	uint8_t	flip;

	ctr = 0;
	flip = 0;
	while (*s1)
	{
		if (*s1 == c)
			flip++;
		else
			flip = 0;
		if (flip > n)
			ctr++;
		s1++;
	}
	return (ctr);
}
