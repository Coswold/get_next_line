# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cooswold <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/21 17:34:55 by cooswold          #+#    #+#              #
#    Updated: 2018/05/21 21:05:17 by cooswold         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = $(wildcard srcs/*.c)

INCLUDES = includes/

CC = gcc

CFLAGS = -c -Wall -Wextra -Werror
REMOVE = /bin/rm -f
RANLIB = ranlib

$(NAME):
	$(CC) $(CFLAGS) $(SRC) -I $(INCLUDES)
	ar rc $(NAME) *.o
	$(RANLIB) $(NAME)

all: $(NAME)

clean:
	$(REMOVE) *.o

fclean: clean
	$(REMOVE) $(NAME)

re: fclean all
