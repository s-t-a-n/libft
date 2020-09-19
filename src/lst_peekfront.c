/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   lst_peekfront.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: sverschu <sverschu@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/19 20:26:21 by sverschu      #+#    #+#                 */
/*   Updated: 2020/09/19 20:26:32 by sverschu      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*list_peekfront(t_list *root)
{
	if (root)
	{
		while (root->prev)
			root = root->prev;
	}
	return (root);
}
