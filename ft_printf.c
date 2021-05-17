#include "ft_printf.h"
int	ft_printf(const char *format, ...)
{
	va_list		ap;
	t_spec		sp;
	int			res;

	va_start(ap, format);
	ft_zeroing_sp(&sp);
	res = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			res += ft_main_parser(&format, ap, &sp);
			format++;
			ft_zeroing_sp(&sp);
		}
		else
			res += write(1, &*format++, 1);
	}
	va_end(ap);
	return (res);
}
