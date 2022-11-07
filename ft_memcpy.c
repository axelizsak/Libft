#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*dest2;
	char	*src1;

	if ((dest == src) || n == 0)
		return (dest);
	if (!dest && !src)
		return (0);
	dest1 = (char *)dest;
	src1 = (const char *)src;
	while (n--)
		dest1[n] = src1[n];
	return (dest);
}
