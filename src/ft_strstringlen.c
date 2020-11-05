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
	size_t	len;

	len = 1;
	if (*str)
	{
		while (str[len])
		{
			if (str[len] == *str)
			{
				if (str[len - 1] != '\\'
				|| (len >= 2 && str[len - 1] == '\\' && str[len - 2] == '\\'))
					return (len - 1);
			}
			len++;
		}
		if (str[len] != *str)
			return (0);
	}
	return (len - 1);
}
