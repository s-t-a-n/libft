/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstrip_t.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: sverschu <sverschu@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/05 20:55:44 by sverschu      #+#    #+#                 */
/*   Updated: 2020/09/05 20:58:42 by sverschu      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int			main(int argc, char **argv)
{
	if(argc == 2)
	{
		printf("original string : |%s|, with len %zu\n", argv[1], ft_strlen(argv[1]));
		char *strp = ft_strnstrip(argv[1], ' ', 1);
		printf("stripped string : |%s|, with len %zu\n", strp, ft_strlen(strp));
		return(0);
	}
	return (1);
}
