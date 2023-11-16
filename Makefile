# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/14 11:38:14 by sforster          #+#    #+#              #
#    Updated: 2023/11/16 20:18:36 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_c.c	printft test.c
NAME	= libftprintf.a
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f

OBJ		:= $(SRCS:%.c=%.0)


all

clean

fclean

re: 