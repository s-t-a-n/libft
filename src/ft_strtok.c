/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtok.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sverschu <sverschu@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/19 20:48:17 by sverschu      #+#    #+#                 */
/*   Updated: 2020/09/19 20:49:11 by sverschu      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** untested code!
** return str after first occurence of next *delim token
*/

char			*ft_strtok(char *str, const char *delim)
{
	char		*key;
	static char	*head;
	char		*tail;

	if (str != NULL)
		head = str;
	key = NULL;
	if (head)
	{
		tail = ft_strstr(head, delim);
		if (tail)
		{
			key = ft_strsub(head, 0, (size_t)tail - (size_t)head);
			head = tail + 1;
		}
		else
		{
			key = ft_strdup(head);
			head = NULL;
		}
	}
	return (key);
}

/*
** char	*ft_strtok_r(char *str, const char *delim, char **saveptr)
** {
**
** }
*/
