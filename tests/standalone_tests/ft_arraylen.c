#include <stdio.h>
#include "libft.h"

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		char **array = ft_strsplit(argv[1], ' ');
		size_t len = ft_arraylen((const void **)array);
		printf("len : %lu\n", len);
		ft_array_destroy((void **)array, len);
		return (0);
	}
	else
	{
		return (1);
	}
}

