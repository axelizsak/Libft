#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{	
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	if (dest == src)
		return (dest);
	if (s < d)
	{
		while (n--)
			*(d + n) = *(s + n);
		return (dest);
	}
	while (n--)
		*d++ = *s++;
	return (dest);
}
