CC = cc
CFLAGS = -Wall -Wextra -Werror 
NAME = libftprintf.a
imps = 

sources = $(imps:.o=.c)

all : $(NAME)

 $(NAME) : $(imps)
			ar -rc $(NAME) $(imps)

%.o : %.c get_next_line.h
	$(CC) $(CFLAGS) -c $<

clean :
		rm -f *.o

fclean :
		rm -f *.a *.o

re : fclean all

.PHONY: fclean clean re all