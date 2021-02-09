/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   lst_addback.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: sverschu <sverschu@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/19 20:14:17 by sverschu      #+#    #+#                 */
/*   Updated: 2020/09/19 21:55:59 by sverschu      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

struct t_list		*lst_addback(struct t_list **root, void *subject)
{
	struct t_list	*head;
	struct t_list	*new;

	new = malloc(sizeof(struct t_list));
	if (new)
	{
		new->next = NULL;
		new->subject = subject;
		if (*root)
		{
			head = *root;
			while (head->next)
				head = head->next;
			head->next = new;
			new->prev = head;
		}
		else
		{
			new->prev = NULL;
			*root = new;
		}
	}
	return (new);
}
