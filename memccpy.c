#include "libft.h"

void	*ft_memccpy(void *dst, const char *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;
	unsigned char	k;

	k = (unsigned char)c;
	i = 0;
	str1 = (unsigned char *)src;
	str2 = (unsigned char *)dst;
	while (i < n)
	{
		str2[i] = str1[i];
		if (str2[i] == k)
		{
			return (str2 + (i + 1));
		}
		i++;
	}
	return (0);
}