CC = cc
CFLAGS = -Wall -Wextra -Werror 
NAME = libftprintf.a
imps = ft_printf.o ft_char.o ft_putstr.o ft_puthexa.o ft_ulong.o ft_integer.o

sources = $(imps:.o=.c)

all : $(NAME)

 $(NAME) : $(imps)
			ar -rc $(NAME) $(imps)

%.o : %.c ft_printf.h
	$(CC) $(CFLAGS) -c $<

clean :
		rm -f *.o

fclean :
		rm -f *.a *.o

re : fclean all

.PHONY: fclean clean re all