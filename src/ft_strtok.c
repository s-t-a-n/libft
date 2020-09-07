#include "libft.h"

/*
** untested code!
** return str after first occurence of next *delim token
*/

char	*ft_strtok(char *str, const char *delim)
{
	char		*head;
	static char	*tail;
	int			i;

	if (tail == NULL)
		tail = str;
	head = tail;
	while (*tail)
	{
		i = 0;
		while (delim[i] && delim[i] != *tail)
			i++;
		if (delim[i] == *tail)
		{
			tail++;
			return(tail);
		}
		tail++;
	}
	return (tail);
}

/*
** char	*ft_strtok_r(char *str, const char *delim, char **saveptr)
** {
** 
** }
*/
