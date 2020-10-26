
#include "libft.h"

char		*ft_strtolower(char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		s[i] = ft_tolower(s[i]);
		i++;
	}
	return (s);
}
