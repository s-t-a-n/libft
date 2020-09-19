/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   lst_destroy_item.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: sverschu <sverschu@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/19 20:30:55 by sverschu      #+#    #+#                 */
/*   Updated: 2020/09/19 20:46:40 by sverschu      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list		*lst_destroy_item(t_list *root, uint8_t is_malloced)
{
	if (root && is_malloced)
		free(root->subject);
	free(root);
	return (NULL);
}
