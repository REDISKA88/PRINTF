#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_spec
{
	int		minus;
	int		zero;
	int		width;
	int		point;
	int		prec;
	char	chr;
}				t_spec;

int			ft_apply_width(char *str, int len, t_spec *sp);
int			ft_atoi(const char **format);
int			ft_isdigit(int c);
int			ft_number_size(long n, int base);
int			ft_number_size_long(unsigned long n, int base);
char		*ft_itoa_id(int n, t_spec *sp);
char		*ft_itoa_ptr(unsigned long lptr, t_spec *sp);
char		*ft_itoa_u(unsigned int u, t_spec *sp);
char		*ft_xitoa(unsigned int x, t_spec *sp);
char		*ft_xxitoa(unsigned int x, t_spec *sp);
int			ft_main_parser(const char **format, va_list ap, t_spec *sp);
void		ft_parsing_flags(const char **format, t_spec *sp);
void		ft_parsing_prec(const char **format, va_list ap, t_spec *sp);
int			ft_parsing_types(const char **format, t_spec *sp, va_list ap);
void		ft_parsing_width(const char **format, va_list ap, t_spec *sp);
int			ft_print_percent(t_spec *sp);
int			ft_print_chr(t_spec *sp, va_list ap);
int			ft_print_id(t_spec *sp, va_list ap);
int			ft_print_ptr(t_spec *sp, va_list ap);
int			ft_print_str(t_spec *sp, va_list ap);
int			ft_print_u(t_spec *sp, va_list ap);
int			ft_print_x(t_spec *sp, va_list ap );
int			ft_print_xx(t_spec *sp, va_list ap);
int			ft_printf(const char *format, ...);
void		ft_put_while(char c, int len);
void		ft_putstr_fd(char *s, int fd);
size_t		ft_strlen(const char *s);
void		*ft_memcpy(void *dst, const void *src, int num);
char		*ft_strdup(const char *str);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_substr(char const *str, unsigned int start, size_t len);
void		ft_zeroing_sp(t_spec *sp);

#endif
