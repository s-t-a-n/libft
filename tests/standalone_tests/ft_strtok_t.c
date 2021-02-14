
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		char *token;

		while ((token = ft_strtok(argv[1], argv[2])))
		{
			printf("token : |%s|\n", token);
			argv[1] = NULL;
		}
		return (0);
	}
	else
		return (1);
}
