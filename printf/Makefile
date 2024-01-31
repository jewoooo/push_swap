NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = rcs
RM = rm -f
MAKE_CUR = make -C
LIBFT_DIR = ./libft
LIBFT = ./libft/libft.a
SRCS = ./ft_printf.c ./ft_printf_utils1.c ./ft_printf_utils2.c
OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : make_mandatory

make_mandatory : $(OBJS)
	@ $(MAKE_CUR) $(LIBFT_DIR) bonus > /dev/null
	cp $(LIBFT) $(NAME)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)
	touch make_mandatory

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	@ $(MAKE_CUR) $(LIBFT_DIR) clean > /dev/null
	$(RM) $(OBJS)
	$(RM) make_mandatory

fclean : clean
	@ $(MAKE_CUR) $(LIBFT_DIR) fclean > /dev/null
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re
