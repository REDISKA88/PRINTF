#include "ft_printf.h"
int	ft_print_ptr(t_spec *sp, va_list ap)
{
	int				res;
	int				len;
	char			*str;
	unsigned long	lptr;
	char			*vargstring;

	lptr = va_arg(ap, unsigned long);
	if (sp->point && sp->prec == 0 && lptr == 0)
		vargstring = ft_strdup("");
	else
		vargstring = ft_itoa_ptr(lptr, sp);
	str = ft_strjoin("0x", vargstring);
	len = sp->width - ft_strlen(str);
	res = ft_apply_width(str, len, sp);
	free(vargstring);
	free(str);
	return (res);
}
