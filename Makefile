# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccarnot <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/22 18:14:44 by ccarnot           #+#    #+#              #
#    Updated: 2023/05/22 18:36:10 by ccarnot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFLAGS = -g3 -Wall -Wextra -Werror

SRC = ft_printf.c prints.c prints_hexa.c utils.c

OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

all: $(NAME)

%.o:%.c
	cc -I $(CFLAGS) -o $@ -c $?

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
