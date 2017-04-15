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

RUSH2 	= rush-2
RUSH_00 = rush-00
RUSH_01 = rush-01
RUSH_02 = rush-02
RUSH_03 = rush-03
RUSH_04 = rush-04

FT_SRCS = srcs/ft_srcs.c srcs/ft_str_srcs.c srcs/main.c srcs/print_rush.c srcs/check_rushes.c

OBJECTS = *.o

all: $(RUSH2) $(RUSH_00) $(RUSH_01) $(RUSH_02) $(RUSH_03) $(RUSH_04)

$(RUSH2):
	gcc -Wall -Wextra -Werror -Iincludes -c $(FT_SRCS)
	gcc -Wall -Wextra -Werror $(OBJECTS) -o $(RUSH2)

$(RUSH_00):
	gcc -Wall -Wextra -Werror -Iincludes -c srcs/rush_00.c srcs/ft_srcs.c
	gcc -Wall -Wextra -Werror rush_00.o ft_srcs.o -o $(RUSH_00)

$(RUSH_01):
	gcc -Wall -Wextra -Werror -Iincludes -c srcs/rush_01.c srcs/ft_srcs.c
	gcc -Wall -Wextra -Werror rush_01.o ft_srcs.o -o $(RUSH_01)

$(RUSH_02):
	gcc -Wall -Wextra -Werror -Iincludes -c srcs/rush_02.c srcs/ft_srcs.c
	gcc -Wall -Wextra -Werror rush_02.o ft_srcs.o -o $(RUSH_02)

$(RUSH_03):
	gcc -Wall -Wextra -Werror -Iincludes -c srcs/rush_03.c srcs/ft_srcs.c
	gcc -Wall -Wextra -Werror rush_03.o ft_srcs.o -o $(RUSH_03)

$(RUSH_04):
	gcc -Wall -Wextra -Werror -Iincludes -c srcs/rush_03.c srcs/ft_srcs.c
	gcc -Wall -Wextra -Werror rush_04.o ft_srcs.o -o $(RUSH_04)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(RUSH_00) $(RUSH_01) $(RUSH_02) $(RUSH_03) $(RUSH_04) $(RUSH2)

re: fclean all
