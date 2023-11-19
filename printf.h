/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 10:35:19 by marvin            #+#    #+#             */
/*   Updated: 2023/11/16 10:35:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef PRINTF_H
# define PRINTF_H
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

int	ft_printf(const char *f, ...);
int	ft_print_c(int c);
int	ft_print_s(char *str);
int	ft_print_d(int n);

#endif