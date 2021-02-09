/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   lst_destroy.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: sverschu <sverschu@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/19 20:32:08 by sverschu      #+#    #+#                 */
/*   Updated: 2020/10/25 19:46:16 by sverschu      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

struct t_list		*lst_destroy(struct t_list **root, uint8_t is_malloced)
{
	struct t_list	*head;
	struct t_list	*rip;

	if (!root || !*root)
		return (NULL);
	head = (*root)->prev;
	while (head)
	{
		rip = head;
		head = head->prev;
		lst_destroy_item(rip, is_malloced);
	}
	head = (*root)->next;
	while (head)
	{
		rip = head;
		head = head->next;
		lst_destroy_item(rip, is_malloced);
	}
	lst_destroy_item(*root, is_malloced);
	return ((*root = NULL));
}
