#include "ft_printf.h"
void	ft_parsing_prec(const char **format, va_list ap, t_spec *sp)
{
	if (**format == '.' && (*format)++)
	{
		sp->point = 1;
		if (**format == '*' || ft_isdigit(**format))
		{
			if (**format == '*')
			{
				sp->prec = va_arg(ap, int);
				*format += 1;
			}
			else
				sp->prec = ft_atoi(format);
		}
	}
}
