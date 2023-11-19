/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:54:54 by marvin            #+#    #+#             */
/*   Updated: 2023/11/16 18:54:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "printf.h"

int	ft_handlevariadics(char print_type, va_list args)
{
	int	i;

	i = 0;
	if (print_type == 'c')
		i += ft_print_c(va_arg(args, int));
	if (print_type == 's')
		i += ft_print_s(va_arg(args, char *));
	if (print_type == 'd')
		i += ft_print_d(va_arg(args, int));
	return (i);
}

int	ft_printf(const char *format, ...)
{
	int	i;
	int	prev_i;
	int	count;
	va_list	args;

	i = 0;
	prev_i = 0;
	count = 0;
	va_start(args, format);
	while (format[i])
	{
		while (format[i] != '%' && format[i] != 0)
			i++;
		write (1, format + prev_i, i - prev_i);
		count += i - prev_i;
		if (format[i] == '%')
		{
			count += ft_handlevariadics(*(format + i + 1), args);
			i += 2;
			prev_i = i;
		}
	}
	va_end(args);
	return (count);
}

int	main(void)
{
	printf("%i", ft_printf("Hey%d", "2000"));
	return (0);
}
