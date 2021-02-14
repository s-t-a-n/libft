/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memdmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sverschu <sverschu@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/19 21:57:30 by sverschu      #+#    #+#                 */
/*   Updated: 2021/02/14 21:57:32 by sverschu      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

void	ft_memdmp(const void *s_, size_t n, int fd)
{
	const unsigned char	*s = s_;
	char				*val;
	size_t				i;

	ft_putstr_fd("MEM [ ", fd);
	i = 0;
	while (i < n)
	{
		val = ft_ltoa_base(s[i], 16, TRUE);
		ft_putstr_fd(val, fd);
		ft_putstr_fd(" ", fd);
		i++;
		free(val);
	}
	ft_putstr_fd(" ]\n", fd);
}
