/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   lst_addfront.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: sverschu <sverschu@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/19 20:17:53 by sverschu      #+#    #+#                 */
/*   Updated: 2020/09/19 20:56:58 by sverschu      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

struct t_list		*lst_addfront(struct t_list **root, void *subject)
{
	struct t_list	*new;
	struct t_list	*head;

	new = malloc(sizeof(struct t_list));
	if (new)
	{
		new->prev = NULL;
		new->subject = subject;
		if (*root)
		{
			head = *root;
			while (head->prev)
				head = head->prev;
			head->prev = new;
			new->next = head;
		}
		else
		{
			new->next = NULL;
			*root = new;
		}
	}
	return (new);
}
