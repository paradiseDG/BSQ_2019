##
## EPITECH PROJECT, 2019
## makefile
## File description:
## makefile
##

SRC	=	src/error_mgmnt.c    \
		src/read_file.c      \
		src/square_checker.c

OBJ	=	$(SRC:.c=.o)

NAME	=	bsq

CC	=	gcc

CFLAGS	=	-W -Wall -g

RM	=	rm -vf

all:	$(NAME)

$(NAME): make_lib $(OBJ)
	ar rc $(NAME) $(OBJ) lib/my/libmy.a
	chmod 755 $(NAME)

make_lib:
	make -C lib/my

clean:
	make -C lib/my clean
	$(RM) $(OBJ)

fclean: clean
	make -C lib/my fclean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
