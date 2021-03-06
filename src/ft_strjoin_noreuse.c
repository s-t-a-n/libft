/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin_noreuse.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: sverschu <sverschu@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/19 21:59:50 by sverschu      #+#    #+#                 */
/*   Updated: 2020/06/19 21:59:52 by sverschu      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin_noreuse(char *s1, char *s2)
{
	char	*joined_string;
	size_t	s1_len;
	size_t	s2_len;

	if (!s1 && s2)
		return (s2);
	if (s1 && !s2)
		return (s1);
	if (!s1 && !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	joined_string = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!joined_string)
		return (NULL);
	ft_strlcpy(joined_string, (char *)s1, s1_len + 1);
	ft_strlcat(joined_string, (char *)s2, s1_len + s2_len + 1);
	free(s1);
	free(s2);
	return (joined_string);
}
