#include "libft.h"

int		ft_strlen(const char *src)
{
	int i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}