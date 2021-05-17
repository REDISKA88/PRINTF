#include "ft_printf.h"
int	ft_apply_width(char *str, int len, t_spec *sp)
{
	int		res;

	res = ft_strlen(str);
	if (len < 0)
		ft_putstr_fd(str, 1);
	else
	{
		res += len;
		if (sp->minus)
		{
			ft_putstr_fd(str, 1);
			ft_put_while(sp->chr, len);
		}
		else
		{
			if (str[0] == '-' && sp->chr == '0')
				write(1, str++, 1);
			ft_put_while(sp->chr, len);
			ft_putstr_fd(str, 1);
		}
	}
	return (res);
}
