/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   lst_destroy.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: sverschu <sverschu@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/19 20:32:08 by sverschu      #+#    #+#                 */
/*   Updated: 2020/09/19 20:46:29 by sverschu      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*lst_destroy(t_list *root, uint8_t is_malloced)
{
	t_list	*head;
	t_list	*rip;

	head = root->prev;
	while (head)
	{
		rip = head;
		head = head->prev;
		lst_destroy_item(head, is_malloced);
	}
	head = root->next;
	while (head)
	{
		rip = head;
		head = head->next;
		lst_destroy_item(head, is_malloced);
	}
	return (lst_destroy_item(root, is_malloced));
}
