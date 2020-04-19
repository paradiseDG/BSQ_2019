##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## makefile
##

SRC	=	my_atoi.c			\
		my_getnbr.c			\
		my_memset.c			\
		my_strcut.c 			\
		my_str_isnum.c			\
		my_compute_power_rec.c		\
		my_isneg.c			\
		my_putchar.c			\
		my_putstr.c 			\
		my_strcapitalize.c		\
		my_str_isalpha.c		\
		my_strlen.c   			\
		my_swap.c

OBJ	=	$(SRC:.c=.o)

NAME    =       libmy.a

CC	=	gcc

RM	=	rm -f

all:    $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all













