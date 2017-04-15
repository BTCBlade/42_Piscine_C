# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tochen <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/12 12:47:25 by tochen            #+#    #+#              #
#    Updated: 2016/11/12 12:48:15 by tochen           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr

SRC = srcs/ft_srcs.c srcs/main.c

OBJECTS = ft_srcs.o main.o

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -Iincludes -c $(SRC)
	gcc -Wall -Wextra -Werror $(OBJECTS) -o $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
