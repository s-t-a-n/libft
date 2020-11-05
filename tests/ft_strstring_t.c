/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strstring_t.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: sverschu <sverschu@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/25 22:37:10 by sverschu      #+#    #+#                 */
/*   Updated: 2020/10/25 22:37:12 by sverschu      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		char *str = ft_strstring(argv[1]);
		printf("input string : |%s|, ft_strstring : |%s|\n", argv[1], str);
		free(str);
		return (0);
	}
	return(1);
}
