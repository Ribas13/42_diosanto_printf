NAME	= libftprintf.a

SRCS	= ft_printf.c			\
	   	ft_hexa_len.c 			\
		ft_putcharacter_len.c	\
		ft_string.c				\
		ft_putnbr_len.c			\
		ft_unsigned_int_len.c	\
		ft_pointer.c

OBJS	= $(SRCS:.c=.o)

CC	= gcc

RM	= rm -f

CFLAGS	= -Wall -Wextra -Werror

all:	$(NAME)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re