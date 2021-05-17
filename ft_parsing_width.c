#include "ft_printf.h"
void	ft_parsing_width(const char **format, va_list ap, t_spec *sp)
{
	int	num;

	if (**format == '*' || ft_isdigit(**format))
	{
		if (**format == '*')
		{
			num = va_arg(ap, int);
			if (num < 0)
			{
				sp->minus = 1;
				num *= -1;
			}
			*format += 1;
		}
		else
			num = ft_atoi(format);
		sp->width = num;
	}
	if (!sp->minus && sp->zero)
		sp->chr = '0';
}
