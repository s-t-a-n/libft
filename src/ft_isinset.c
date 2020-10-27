
#include "libft.h"

/*
** ft_isinset checks for matches of c in the string set (or other way around)
*/

int		ft_isinset(char c, char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}
