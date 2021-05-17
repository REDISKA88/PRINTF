#include "ft_printf.h"
int	ft_number_size_long(unsigned long n, int base)
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

char	*ft_itoa_ptr(unsigned long lptr, t_spec *sp)
{
	int			len;
	char		*dest;
	char		*base;

	base = "0123456789abcdef";
	len = ft_number_size_long(lptr, 16);
	if (sp->prec > len)
		len = sp->prec;
	dest = (char *)malloc((len + 1) * sizeof (char));
	if (!dest)
		return (0);
	if (lptr == 0)
		dest[0] = '0';
	dest[len--] = 0;
	while (len >= 0)
	{
		dest[len--] = base[lptr % 16];
		lptr = (lptr / 16);
	}
	return (dest);
}
