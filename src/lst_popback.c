/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   lst_popback.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: sverschu <sverschu@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/19 20:26:52 by sverschu      #+#    #+#                 */
/*   Updated: 2020/09/19 20:49:39 by sverschu      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*list_popback(t_list *root, uint8_t is_malloced)
{
	if (root)
	{
		while (root->next)
			root = root->next;
		if (root->prev)
			root->prev->next = NULL;
		return (lst_destroy_item(root, is_malloced));
	}
	return (root);
}
