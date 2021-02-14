/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strstringlen_t.c                                :+:    :+:            */
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
		size_t len = ft_strstringlen(argv[1]);
		printf("length of string : %zu, sub string : |%s|\n", len, ft_strsub(argv[1], 1, len));
		return (0);
	}
	return(1);
}
