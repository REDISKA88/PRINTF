#include "ft_printf.h"
int	ft_atoi(const char **format)
{
	int		n;
	int		sign;

	sign = 1;
	n = 0;
	while (**format == ' ' || (**format >= 9 && **format <= 13))
		format++;
	if (**format == '+' || **format == '-')
	{
		if (**format == '-')
			sign = sign * (-1);
		format++;
	}
	while (ft_isdigit(**format))
		n = (n * 10) + (*(*format)++ - '0');
	return (n * sign);
}
