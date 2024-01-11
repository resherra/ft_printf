# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: recherra <recherra@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/08 19:55:41 by recherra          #+#    #+#              #
#    Updated: 2024/01/11 20:14:54 by recherra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
CFLAGS = 
SRC = ft_checker.c ft_printf.c ft_put_add.c ft_put_hexa_base.c ft_put_unsigned_nbr.c ft_putchar.c ft_putnbr.c ft_putstr.c
OBJ = ${SRC:.c=.o}
NAME = libftprintf.a

all: ${NAME}

${NAME}: ${OBJ}
	ar -rcs ${NAME} ${OBJ}
	
clean:
	rm -rf ${OBJ}

fclean: clean
	rm -rf ${NAME}

re: fclean all	