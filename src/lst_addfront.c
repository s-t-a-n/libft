/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   lst_addfront.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: sverschu <sverschu@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/19 20:17:53 by sverschu      #+#    #+#                 */
/*   Updated: 2020/09/19 20:46:52 by sverschu      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*lst_addfront(t_list *root, void *subject)
{
	t_list *new;

	new = malloc(sizeof(t_list));
	if (new)
	{
		new->prev = NULL;
		new->subject = subject;
		if (root)
		{
			while (root->prev)
				root = root->prev;
			root->prev = new;
			new->next = root;
		}
	}
	return (new);
}
