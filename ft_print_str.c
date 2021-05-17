#include "ft_printf.h"
int	ft_print_str(t_spec *sp, va_list ap)
{
	int		res;
	int		len;
	char	*str;
	char	*vargstring;

	vargstring = va_arg(ap, char *);
	if (!vargstring)
		vargstring = ft_strdup("(null)");
	else
		vargstring = ft_strdup(vargstring);
	if (sp->point && sp->prec >= 0)
		str = ft_substr(vargstring, 0, sp->prec);
	else
		str = ft_strdup(vargstring);
	len = sp->width - ft_strlen(str);
	res = ft_apply_width(str, len, sp);
	free(vargstring);
	free(str);
	return (res);
}
