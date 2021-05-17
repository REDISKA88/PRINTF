#include "ft_printf.h"
int	ft_main_parser(const char **format, va_list ap, t_spec *sp)
{
	int	res;

	res = 0;
	ft_parsing_flags(format, sp);
	ft_parsing_width(format, ap, sp);
	ft_parsing_prec(format, ap, sp);
	res = ft_parsing_types(format, sp, ap);
	return (res);
}
