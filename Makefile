# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: recherra <recherra@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/08 19:55:41 by recherra          #+#    #+#              #
#    Updated: 2024/01/08 20:13:17 by recherra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ${wildcard *.c}
OBJ = ${SRC:.c=.o}
NAME = libftprintf.a


${NAME}: ${OBJ}
	ar -rcs ${NAME} ${OBJ}
	
clean:
	rm -rf ${OBJ}

fclean: clean
	rm -rf ${NAME}

re: fclean all