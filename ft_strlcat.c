#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t i;
    size_t j;
    size_t rez;
    
    i = 0;
    j = 0;
    rez = ft_strlen(src);
    
    if (size > 0)
    {
        while (dest[i] && i <= size)
            i++;
        while (src[j] && i <= size - 1)
            dest[i++] = src[j++];
    }
    if (j > 0)
    {
        dest[i] = '\0';
        return(rez + i - j);
    }
    return(rez + i);
}