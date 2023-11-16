/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:12:53 by sforster          #+#    #+#             */
/*   Updated: 2023/11/16 20:18:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>

int ft_printf(const char *f, ...)
{
	int		count;
	int		i;

	count = 0;
	i = 0;
	va_list	args;
	va_start(args, ?????)
	while (f[i])
	{
		while (f[i] != '%')
		{
			write (1, &f[i], 1);
			count++;
			i++;
		}
		if (f[i] == '%')
		{
			if (f[i + 1] == 'c')
				count = count + ft_c(va_arg(args, char));
			if (f[i +1] == 's')
				va_arg(args, char *);
			if (f[i +1] == 'p')
				va_arg(args, )
			if (f[i +1] == 'd')
		

//			count = count + ...;
			i = i + 2;
		}
	}
	return (count);
}

int	main(void)
{
	ft_printf("oise%daupluie%");
}