#include <stdio.h>
#include <string.h>
#include "libft.h"

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("ft_strcsetlen for |%s| with set |%s| is : %zu (strlen:%zu)\n", argv[1], argv[2], ft_strcsetlen(argv[1], argv[2]), strlen(argv[1]));
		return (0);
	}
	else
		return (1);
}
