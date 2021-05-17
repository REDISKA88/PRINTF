#include "ft_printf.h"
char	*ft_itoa_u(unsigned int u, t_spec *sp)
{
	long		lu;
	int			len;
	char		*dest;

	lu = u;
	len = ft_number_size(lu, 10);
	if (sp->prec > len)
		len = sp->prec;
	dest = (char *)malloc((len + 1) * sizeof (char));
	if (!dest)
		return (0);
	if (lu == 0)
		dest[0] = '0';
	dest[len--] = 0;
	while (len >= 0)
	{
		dest[len--] = (lu % 10) + '0';
		lu = (lu / 10);
	}
	return (dest);
}
