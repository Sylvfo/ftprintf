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

int	ft_handleXXX()
{
	int	i;

	i = 100;
	write (1, "X", 1);
	write (1, "X", 1);
	write (1, "X", 1);
	return (i);
}

int	ft_countperc(const char *str)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i])
	{
	if (str[i] == '%')
		count++;
	i++;
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int	i;
	int	prev_i;
	int	arg_i;
	int	count;
	va_list	args;

	i = 0;
	prev_i = 0;
	arg_i = ft_countperc(format);
	count = 0;
	va_start(args, 2);
	while (format[i])
	{
		while (format[i] != '%' && format[i] != 0)
			i++;
		write (1, format + prev_i, i - prev_i);
		count += i - prev_i;
		if (format[i] == '%')
		{
			count += ft_handleXXX();
			i += 2;
			prev_i = i;
		}
	}
	return (count);
}

int	main(void)
{
	printf("%i", ft_printf("rahl%ahlah", 1));
	return (0);
}