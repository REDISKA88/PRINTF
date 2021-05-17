#include "ft_printf.h"
char	*ft_xitoa(unsigned int x, t_spec *sp)
{
	long	lx;
	int		len;
	char	*dest;
	char	*base;

	base = "0123456789abcdef";
	lx = x;
	len = ft_number_size(lx, 16);
	if (sp->prec > len)
		len = sp->prec;
	dest = (char *)malloc((len + 1) * sizeof (char));
	if (!dest)
		return (0);
	if (lx == 0)
		dest[0] = '0';
	dest[len--] = 0;
	while (len >= 0)
	{
		dest[len--] = base[lx % 16];
		lx = (lx / 16);
	}
	return (dest);
}
