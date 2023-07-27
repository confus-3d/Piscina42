NAME	=	bsq

CC		=	gcc

CFLAGS	=	-Wall -Werror -Wextra

SRC		=	main.c \
			calc.c \
			check_error.c \
			save_data.c \
			map_functions.c \
			single_map.c

OBJ		=	$(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.SILENT: all $(NAME) $(OBJ) clean fclean
.PHONY: all clean fclean re
