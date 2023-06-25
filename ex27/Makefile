# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: facetint <facetint@student.42kocaeli.com.  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/21 18:01:31 by facetint          #+#    #+#              #
#    Updated: 2023/06/21 18:01:37 by facetint         ###   ########.tr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ./ft_display_file.c
OBJS	= ${SRCS:.c=.o}
NAME	= ft_display_file
CC		= gcc
RM		= rm -f
CFLAGS 	= -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME} : ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all : ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re .c.o
