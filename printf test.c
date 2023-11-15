/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforster <sforster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:12:53 by sforster          #+#    #+#             */
/*   Updated: 2023/11/15 10:31:01 by sforster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_printf(const char *f, ...)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (f[i])
	{
		while (f[i] != '%')
		{
			write (1, &f[i], 1);
			count++;
			i++;
		}
		while (f[i] == '%')
		{
			if (f[i + 1] == 'c')
				write (1, "$C", 2);
			if (f[i +1] == 'd')
				write (1, "$D", 2);
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