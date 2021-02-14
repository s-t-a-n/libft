/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi_base_test.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: sverschu <sverschu@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/01 15:09:46 by sverschu      #+#    #+#                 */
/*   Updated: 2020/07/02 16:52:40 by sverschu      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

extern int		ft_atoi_base(const char *str, unsigned int base);

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		int base = atoi(argv[2]);
		printf("strtol : %li for base %i\n", strtol(argv[1], NULL, base), base);
		printf("ft_atoi_base : %i for base %i\n", ft_atoi_base(argv[1], base), base);
		return (0);
	}
	else
		return (1);
}
