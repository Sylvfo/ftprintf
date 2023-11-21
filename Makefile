# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sforster <sforster@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/14 11:38:14 by sforster          #+#    #+#              #
#    Updated: 2023/11/21 19:17:57 by sforster         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_printf.c	ft_print_c.c	ft_print_s.c	ft_print_d.c\
		ft_calloc.c	ft_strdup.c	ft_strlen.c	ft_print_x.c\
		ft_print_i.c
NAME	= libftprintf.a
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
INCLUDES = -I./includes
RM		= rm -f

OBJ		:= $(SRCS:.c=.o)

.c.o:
	${CC} $(CFLAGS) -c $< -o ${<:.c=.o}

all: 		$(NAME)

$(NAME):	$(OBJ)
				ar	-rcs $(NAME) $(OBJ)
				ranlib $(NAME)

clean:
		$(RM) $(OBJ)

fclean:		clean
				$(RM) $(NAME)

re: fclean 	all

.PHONY:		all re clean fclean bin