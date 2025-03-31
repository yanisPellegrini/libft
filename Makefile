NAME           	= bsq

SRCS            = main.c	\
				error_gest.c	\
				utils/ft_atoi.c	\
				dimensions.c	\
				utils/ft_strncpy.c		\
				utils/ft_strlen.c	\
				utils/ft_putchar.c	\
				utils/min.c		\
				utils/ft_strdup.c \
				link_list.c	\
				manage_map.c	\
				manage_matrix.c	\

OBJ            = $(SRCS:.c=.o)

CFLAGS         = -Wall -Wextra -Werror -I .

PASTEL_PINK = \033[1;38;5;218m
RED = \033[1;31m
WHITE = \033[0m
LIGHT_ORANGE = \033[1;38;5;217m

all:            $(NAME) done

$(NAME)		:	$(OBJ)
		@echo "$(PASTEL_PINK)Building executable...$(WHITE)"
		@cc -o $(NAME) $(OBJ)

%.o: %.c
		@cc $(CFLAGS) -c $< -o $@

clean:
		@echo "$(LIGHT_ORANGE)Cleaning object files$(WHITE)"
		@rm -f $(OBJ)

fclean:         clean
		@echo "$(RED)Removing executable$(WHITE)"
		@rm -f $(NAME)

re:             fclean all

done:
		@echo "$(PASTEL_PINK)Done!$(WHITE)"