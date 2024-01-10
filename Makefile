# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: recherra <recherra@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/08 19:55:41 by recherra          #+#    #+#              #
#    Updated: 2024/01/10 19:24:59 by recherra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = 
SRC = ${wildcard *.c}
OBJ = ${SRC:.c=.o}
NAME = libftprintf.a

all: ${NAME}

${NAME}: ${OBJ}
	ar -rs ${NAME} ${OBJ}
	
clean:
	rm -rf ${OBJ}

fclean: clean
	rm -rf ${NAME}

re: fclean all

main:
	${CC} ${CFLAGS} main.c libftprintf.a
	