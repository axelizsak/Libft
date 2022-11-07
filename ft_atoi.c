#include "libft.h"

int	ft_atoi(char *s)
{
	int	n;
	int	i;

	n = 0;
	i = 1;
	if (!*s)
		return (0);
    while (*s == ' ' || (*s >= 9 && *s <= 13))
        s++;
    if (*s == '+' || *s == '-')
    {
        if (*s == '-')
            i *=-1;
        s++;
    }
    while (*s >= '0' && *s <= '9')
    {
        n *= 10;
        n += *s - '0';
        s++;
    }
    return (n * i);
}
