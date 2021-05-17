#include "ft_printf.h"
void	ft_zeroing_sp(t_spec *sp)
{
	sp->minus = 0;
	sp->zero = 0;
	sp->width = 0;
	sp->point = 0;
	sp->prec = 0;
	sp->chr = ' ';
}
