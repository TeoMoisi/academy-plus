#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *str_new;

	if (!s1 || !s2 || !(str_new = ft_strnew((ft_strlen(s1) + ft_strlen(s2)))))
		return (NULL);
	str_new = ft_strcpy(str_new, s1);
	str_new = ft_strcat(str_new, s2);
	return (str_new);
}