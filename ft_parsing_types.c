#include "ft_printf.h"
int	ft_parsing_types(const char **format, t_spec *sp, va_list ap)
{
	int	res;

	res = 0;
	if (**format == 'i' || **format == 'd')
		res = ft_print_id(sp, ap);
	if (**format == 'u')
		res = ft_print_u(sp, ap);
	if (**format == 'c')
		res = ft_print_chr(sp, ap);
	if (**format == '%')
		res = ft_print_percent(sp);
	if (**format == 'p')
		res = ft_print_ptr(sp, ap);
	if (**format == 's')
		res = ft_print_str(sp, ap);
	if (**format == 'x')
		res = ft_print_x(sp, ap);
	if (**format == 'X')
		res = ft_print_xx(sp, ap);
	return (res);
}
