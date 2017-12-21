#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
    char *pos;
    
    pos=0;
    while (*str != '\0')
    {
        if (*str == (char)c)
            pos = (char *)str;
        str++;
    }
    if (*str == (char)c)
        return((char *)str);
    else
        return(pos);  
}