# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: albromer <albromer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/25 10:18:45 by albromer          #+#    #+#              #
#    Updated: 2023/01/26 13:22:22 by albromer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror

CC = gcc

CLEAN = rm -f

SRC =	ft_printf.c\
		ft_putchar.c\
		ft_puthexa.c\
		ft_putnbr.c\
		ft_putnbru.c\
		ft_putstr.c\
		ft_strlen.c\
		ft_putnbrhexa.c\
			
OBJ = $(SRC:.c=.o)

${NAME}:
		${CC} -c ${CFlAGS} ${SRC}
		ar crs ${NAME} ${OBJ}

all: ${NAME}

clean: 
		${CLEAN} ${OBJ}

fclean: clean

		${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
