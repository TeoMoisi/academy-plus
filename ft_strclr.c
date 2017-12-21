#include "libft.h"

void	ft_strclr(char *s)
{
	size_t	k;

	k = 0;
	if (s)
	{
		while (s[k])
		{
			s[k] = '\0';
			k++;
		}
	}
	return ;
}