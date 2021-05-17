#include "ft_printf.h"
int	ft_print_percent(t_spec *sp)
{
	int	res;

	res = 1;
	if (sp->width > 1)
	{
		res += sp->width - 1;
		if (sp->minus)
		{
			write(1, "%", 1);
			ft_put_while(sp->chr, sp->width - 1);
		}
		else
		{
			ft_put_while(sp->chr, sp->width - 1);
			write(1, "%", 1);
		}
	}
	else
		write(1, "%", 1);
	return (res);
}

int	ft_print_chr(t_spec *sp, va_list ap)
{
	char	c;
	int		res;

	res = 1;
	c = va_arg(ap, int);
	if (sp->width > 1)
	{
		res += sp->width - 1;
		if (sp->minus)
		{
			write(1, &c, 1);
			ft_put_while(sp->chr, sp->width - 1);
		}
		else
		{
			ft_put_while(sp->chr, sp->width - 1);
			write(1, &c, 1);
		}
	}
	else
		write(1, &c, 1);
	return (res);
}
