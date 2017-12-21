#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*ptr;

	ptr = 0;
	if (size)
	{
		ptr = (char *)malloc(sizeof(char) * size);
		if (!ptr)
			return (0);
		else
			ft_bzero(ptr, size);
	}
	return ((void *)ptr);
}