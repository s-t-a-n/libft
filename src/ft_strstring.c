#include <stdlib.h>
#include "libft.h"

/*
** ft_strstring looks for quoted substrings and handles escape characters
** reliably. it assumes the first character is the quote character.
** because of use of ft_strstringlen is slightly overmallocs.
*/

char	*ft_strstring(const char *str)
{
	size_t	len;
	size_t	i;
	char	*newstr;

	len = ft_strstringlen(str);
	newstr = malloc(sizeof(char) * (len + 1));
	if (newstr)
	{
		i = 0;
		while (i < len && *str)
		{
			str++;
			if (*str != '\\' || *(str + 1) == '\\')
			{
				newstr[i] = *str;
				i++;
			}
			else if (i > 0 && *(str - 1) == '\\')
				len--;
		}
		newstr[len] = '\0';
	}
	return (newstr);
}
