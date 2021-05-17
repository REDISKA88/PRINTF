#include "ft_printf.h"
void	ft_put_while(char c, int len)
{
	while (len-- > 0)
		write(1, &c, 1);
}
