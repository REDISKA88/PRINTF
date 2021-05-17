SRCS	=	ft_apply_width.c \
            ft_atoi.c \
            ft_isdigit.c \
            ft_itoa_id.c \
            ft_itoa_ptr.c \
            ft_itoa_u.c \
            ft_itoa_x.c \
            ft_itoa_xx.c \
            ft_main_parser.c \
            ft_parsing_flags.c \
            ft_parsing_prec.c \
            ft_parsing_types.c \
            ft_parsing_width.c \
            ft_print_chr.c \
            ft_print_id.c \
            ft_print_ptr.c \
            ft_print_str.c \
            ft_print_u.c \
            ft_print_x.c \
            ft_print_xx.c \
            ft_printf.c \
            ft_put_while.c \
            ft_putstr_fd.c \
            ft_utils.c \
            ft_zeroing_sp.c \

OBJS	= $(SRCS:.c=.o)

NAME	= libftprintf.a

GCC	= gcc
RM	= rm -f
CFLAGS	= -Wall -Wextra -Werror

.c.o:
	$(GCC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS)
	ar rcs $(NAME) $?

all:	$(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:	all clean fclean re