/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   lst_addback.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: sverschu <sverschu@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/19 20:14:17 by sverschu      #+#    #+#                 */
/*   Updated: 2020/09/19 20:47:01 by sverschu      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*lst_addback(t_list *root, void *subject)
{
	t_list *new;

	new = malloc(sizeof(t_list));
	if (new)
	{
		new->next = NULL;
		new->subject = subject;
		if (root)
		{
			while (root->next)
				root = root->next;
			root->next = new;
			new->prev = root;
		}
	}
	return (new);
}
