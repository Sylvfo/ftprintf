# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/14 11:38:14 by sforster          #+#    #+#              #
#    Updated: 2023/11/19 21:18:20 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_printf.c	ft_print_c.c	ft_print_s.c int	ft_print_d.c\
		ft_calloc.c	ft_strdup.c	ft_strlen.c
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