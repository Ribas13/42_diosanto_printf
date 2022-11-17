NAME	= libftprintf.a

SRCS	= ft_printf.c			\
	   	ft_hexa_len.c 			\
		ft_putcharacter_len.c	\
		ft_string.c				\
		ft_putnbr_len.c			\
		ft_unsigned_int_len.c	\
		ft_pointer.c

OBJS = $(SRC:.c=.o)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
	/bin/rm -rf $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all