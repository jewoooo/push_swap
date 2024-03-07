NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
MAKE_CUR = make -C
LIBFT_DIR = ./libft
LIBFT = ./libft/libft.a
SRCS = ./src/main.c \
		./src/calculate.c \
		./src/check.c \
		./src/check2.c \
		./src/do.c \
		./src/math_utils.c \
		./src/find.c \
		./src/parsing.c \
		./src/push.c \
		./src/reverse_rotate.c \
		./src/rotate.c \
		./src/sort_big.c \
		./src/sort_small.c \
		./src/stack.c \
		./src/swap.c
OBJS = $(SRCS:.c=.o)
INCLUDE = -L./libft -lft

all : $(NAME)

$(NAME) : make_mandatory

make_mandatory : $(OBJS)
	$(MAKE_CUR) $(LIBFT_DIR) bonus
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME) $(INCLUDE)
	@ touch make_mandatory

%.o : %.c
	@ $(CC) $(CFLAGS) -c $< -o $@

clean :
	$(MAKE_CUR) $(LIBFT_DIR) clean
	$(RM) $(OBJS)
	@ $(RM) make_mandatory

fclean : clean
	$(MAKE_CUR) $(LIBFT_DIR) fclean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re
