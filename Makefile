# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jewlee <jewlee@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/06 12:38:52 by jewlee            #+#    #+#              #
#    Updated: 2024/02/06 12:39:43 by jewlee           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
MAKE_CUR = make -C
PRINTF_DIR = ./printf
LIBFTPRINTF = ./printf/libftprintf.a
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
