/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strstringlen.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: sverschu <sverschu@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/25 22:11:03 by sverschu      #+#    #+#                 */
/*   Updated: 2020/10/25 22:43:05 by sverschu      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_strstringlen looks for quoted substrings and handles escape characters
** reliably. it assumes the first character is the quote character
*/

size_t	ft_strstringlen(const char *str)
{
	size_t	i;
	size_t	len;

	len = 0;
	i = 1;
	while (str[i])
	{
		if (str[i] == *str)
		{
			if (str[i - 1] != '\\'
			|| (i >= 2 && str[i - 1] == '\\' && str[i - 2] == '\\'))
				return (len);
		}
		len++;
		i++;
	}
	if (str[len] != *str)
		return (0);
	return (len);
}
