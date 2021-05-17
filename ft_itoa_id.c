#include "ft_printf.h"
int	ft_number_size(long n, int base)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		len++;
		n = (n / base);
	}
	return (len);
}

static void	*ft_memset(void *dest, int value, size_t num)
{
	unsigned char	*str;

	str = (unsigned char *)dest;
	while (num > 0)
	{
		*str = (unsigned char)value;
		str++;
		num--;
	}
	return (dest);
}

static void	*ft_calloc(size_t number, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(number * size);
	if (ptr == 0)
		return (0);
	ft_memset(ptr, 0, number * size);
	return (ptr);
}

char	*ft_itoa_id(int id, t_spec *sp)
{
	int		len;
	long	lid;
	char	*dest;

	lid = id;
	len = ft_number_size(lid, 10);
	if (sp->prec > len)
		len = sp->prec;
	if (lid < 0)
		len += 1;
	dest = (char *)ft_calloc(len + 1, 1);
	if (!dest)
		return (0);
	if (lid < 0)
	{
		dest[0] = '-';
		lid *= -1;
	}
	dest[len--] = 0;
	while (dest && len >= 0 && dest[len] != '-')
	{
		dest[len--] = '0' + lid % 10;
		lid = (lid / 10);
	}
	return (dest);
}
