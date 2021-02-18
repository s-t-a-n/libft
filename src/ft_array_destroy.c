/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_array_destroy.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: sverschu <sverschu@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/22 14:38:35 by sverschu      #+#    #+#                 */
/*   Updated: 2020/06/22 14:39:29 by sverschu      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_array_destroy(void **elements, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		free(elements[i]);
		i++;
	}
	free(elements);
	return (NULL);
}
