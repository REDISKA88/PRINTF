#include "ft_printf.h"
int	ft_print_u(t_spec *sp, va_list ap)
{
	int		u;
	int		res;
	int		len;
	char	*str;

	if (sp->point && sp->prec >= 0)
		sp->chr = ' ';
	u = va_arg(ap, int);
	if (u == 0 && sp->point && sp->prec == 0)
		str = "";
	else
		str = ft_itoa_u(u, sp);
	len = sp->width - ft_strlen(str);
	res = ft_apply_width(str, len, sp);
	if (*str != 0)
		free(str);
	return (res);
}
