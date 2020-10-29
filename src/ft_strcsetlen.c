#include "libft.h"

size_t		ft_strcsetlen(const char *s, const char *set)
{
	const char *s_orig = s;
	const char *set_orig = set;

	while (*s)
	{
		while (*set)
		{
			if (*s == *set)
				return ((size_t)s - (size_t)s_orig);
			set++;
		}
		set = set_orig;
		s++;
	}
	return ((size_t)s - (size_t)s_orig);
}
