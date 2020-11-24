NAME			=		my_printf
 
RM			=		rm -rf
 
CC			=		gcc
 
SRCS			=	rep/my_printf.c
 
OBJ			=		$(SRCS:.c=.o)
					
 
CFLAGS			+=		-Wall -Werror -Wextra
 
all:			$(NAME)
 
$(NAME):		$(OBJ)
			$(CC) $(SRCS) $(CFLAGS) -o $(NAME)
 
clean:
			$(RM) $(OBJ)
 
fclean:			clean
			$(RM) $(NAME)
 
re:	