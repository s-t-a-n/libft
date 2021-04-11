#include "libft.h"

static t_bool lexical_reorder(char **lhs, char **rhs)
{
	if (ft_strcmp(*lhs, *rhs) > 0)
	{
		ft_pswap((void **)lhs, (void **)rhs);
		return (TRUE);
	}
	return (FALSE);
}

void	bubblesort_lexical(char **elements)
{
	size_t	x;
	t_bool	is_sorted;
	
	is_sorted = FALSE;
	while (!is_sorted)
	{
		is_sorted = TRUE;
		x = 0;
		while (elements[x] && elements[x + 1])
		{
			if (lexical_reorder(&elements[x], &elements[x + 1]))
				is_sorted = FALSE;
			x++;
		}
	}
}
