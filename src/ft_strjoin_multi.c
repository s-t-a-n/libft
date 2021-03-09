/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sverschu <sverschu@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/19 21:59:50 by sverschu      #+#    #+#                 */
/*   Updated: 2020/06/19 21:59:52 by sverschu      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static size_t __get_multi_strlen(size_t count, va_list ap)
{
	size_t	len;
	va_list	ap_copy;

	va_copy(ap_copy, ap);
	len = 0;
	while (count > 0)
	{
		len += ft_strlen(va_arg(ap_copy, char *));
		count--;
	}
	return (len);
}

char	*ft_strjoin_multi(size_t count, ...)
{
	char	*catstr;
	size_t	catstr_len;
	va_list	ap;

	va_start(ap, count);
	catstr_len = __get_multi_strlen(count, ap);
	catstr = (char *)malloc(catstr_len + 1);
	if (catstr)
	{
		catstr[0] = '\0';
		while (count > 0)
		{
			ft_strlcat(catstr, va_arg(ap, char *), catstr_len + 1);
			count--;
		}
	}
	va_end(ap);
	return (catstr);
}
