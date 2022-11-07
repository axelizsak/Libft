#include "libft.h"
{
	if (s == NULL)
		return ((void)NULL);
	while (*s)
		write(fd, s++, 1);
	write(fd, "\n", 1);
}
