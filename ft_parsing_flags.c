#include "ft_printf.h"
void	ft_parsing_flags(const char **format, t_spec *sp)
{
	while (**format == '-' || **format == '0')
	{
		if (**format == '-')
			sp->minus = 1;
		if (**format == '0')
			sp->zero = 1;
		*format += 1;
	}
}
