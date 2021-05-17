#include "ft_printf.h"
int	ft_print_xx(t_spec *sp, va_list ap)
{
	int		xx;
	int		res;
	int		len;
	char	*str;

	if (sp->point && sp->prec >= 0)
		sp->chr = ' ';
	xx = va_arg(ap, int);
	if (xx == 0 && sp->point && sp->prec == 0)
		str = ft_strdup("");
	else
		str = ft_xxitoa(xx, sp);
	len = sp->width - ft_strlen(str);
	res = ft_apply_width(str, len, sp);
	free(str);
	return (res);
}
