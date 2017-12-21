#include "libft.h"

char	*ft_strdup(char *src)
{
	char *new;

	new = (char *)malloc(sizeof(new) * ft_strlen(src));
	if (!new)
		return (NULL);
	else
	{
		ft_strcpy(new, src);
		return (new);
	}
}