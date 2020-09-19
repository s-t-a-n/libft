/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   lst_peekback.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: sverschu <sverschu@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/19 20:24:50 by sverschu      #+#    #+#                 */
/*   Updated: 2020/09/19 20:26:05 by sverschu      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*list_peekback(t_list *root)
{
	if (root)
	{
		while (root->next)
			root = root->next;
	}
	return (root);
}
