# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lzaccome <lzaccome@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/16 15:37:56 by lzaccome          #+#    #+#              #
#    Updated: 2021/10/25 05:10:48 by lzaccome         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = @gcc

CFLAGS =  -Wall -Wextra -Werror -I includes #-g3 -fsanitize=address

SRCS =	srcs/main.c \
		srcs/list_action1.c \
		srcs/list_action2.c \
		srcs/list_action3.c \
		srcs/list_manip.c \
		srcs/list_calc.c \
		srcs/radix.c \
		srcs/sort_short.c \
		srcs/fill_list.c \
		utils/ft_atoi.c \
		utils/display.c

_GREY=	$'\033[1;30m
_RED=	$'\033[1;31m
_GREEN=	$'\033[1;32m
_YELLOW=$'\033[1;33m
_BLUE=	$'\033[1;34m
_PURPLE=$'\033[1;35m
_CYAN=	$'\033[1;36m
_WHITE=	$'\033[1;37m

OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		@echo "$(_YELLOW)[Compilation ongoing ...]"
		@sleep 1
		@echo "$(_GREEN)[Compilation finished]"
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
		@echo "$(_CYAN)[Executable created]"
		@echo [Name : push_swap]

%o: %.c
	$(CC) $(FLAGS) -o $@ -c $< -I includes

clean:
	@rm -f $(OBJ)
	@echo "$(_RED)[All .o removed]"

fclean: clean
	@rm -f $(NAME)
	@echo "$(_RED)[Executable removed]"

re: fclean all

.PHONY : all bonus clean fclean re
