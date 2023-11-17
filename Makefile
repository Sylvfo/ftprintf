# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sforster <sforster@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/14 11:38:14 by sforster          #+#    #+#              #
#    Updated: 2023/11/17 10:55:16 by sforster         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS	= ft_printf.c	ft_print_c.c
NAME	= libftprintf.a
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f

OBJ		:= $(SRCS:%.c=%.o)

all: 		$(NAME)

re: fclean 	all

$(NAME):	$(OBJ)
				ar	rcs $(NAME) $(OBJ)
				ranlib $(NAME)

clean:
		$(RM) $(OBJ)

fclean:		clean
				$(RM) $(NAME)

.PHONY:		all re clean fclean bin