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

t_list		*lst_addfront(t_list **root, void *subject)
{
	t_list	*new;
	t_list	*head;

	new = malloc(sizeof(t_list));
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
