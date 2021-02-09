/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   lst_popfront.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: sverschu <sverschu@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/19 20:30:28 by sverschu      #+#    #+#                 */
/*   Updated: 2020/09/19 20:49:27 by sverschu      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

struct t_list		*list_popfront(struct t_list *root, uint8_t is_malloced)
{
	if (root)
	{
		while (root->prev)
			root = root->prev;
		if (root->next)
			root->next->prev = NULL;
		return (lst_destroy_item(root, is_malloced));
	}
	return (root);
}
