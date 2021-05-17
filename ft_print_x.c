#include "ft_printf.h"
int	ft_print_x(t_spec *sp, va_list ap )
{
	int		x;
	int		res;
	int		len;
	char	*str;

	if (sp->point && sp->prec >= 0)
		sp->chr = ' ';
	x = va_arg(ap, int);
	if (x == 0 && sp->point && sp->prec == 0)
		str = ft_strdup("");
	else
		str = ft_xitoa(x, sp);
	len = sp->width - ft_strlen(str);
	res = ft_apply_width(str, len, sp);
	free(str);
	return (res);
}
