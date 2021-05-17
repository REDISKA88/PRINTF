#include "ft_printf.h"
int	ft_print_id(t_spec *sp, va_list ap)
{
	int		id;
	int		res;
	int		len;
	char	*str;

	if (sp->point && sp->prec >= 0)
		sp->chr = ' ';
	id = va_arg(ap, int);
	if (id == 0 && sp->point && sp->prec == 0)
		str = ft_strdup("");
	else
		str = ft_itoa_id(id, sp);
	len = sp->width - ft_strlen(str);
	res = ft_apply_width(str, len, sp);
	free(str);
	return (res);
}
