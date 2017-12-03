#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vpalyvod <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/24 18:39:57 by vpalyvod          #+#    #+#              #
#    Updated: 2017/10/24 18:40:01 by vpalyvod         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = wolf3d
SRC = main.c \
verline.c \
all_hooks.c \
get_next_line.c \
splits.c \
printing.c \
printing_2.c \
check_walls.c \
special_funcs.c \
valid_map.c

OBJ        = $(SRC:.c=.o)

CFLAGS    = -Wall -Wextra -Werror

$(NAME): $(OBJ)
	@make -C libft/
	@gcc $(OBJ) -o $(NAME) -L libft/ -lft  -lmlx -framework OpenGL -framework AppKit

all: $(NAME)

clean:
	@make -C libft/ clean
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME) $(OBJ)

re:	fclean $(NAME)
