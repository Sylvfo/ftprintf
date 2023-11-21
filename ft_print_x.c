/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforster <sforster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 10:50:11 by sforster          #+#    #+#             */
/*   Updated: 2023/11/21 19:32:07 by sforster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_x(long n, int base)
{
	int		count;
	char	*basesymbols;

	count = 0;
	basesymbols = "0123456789abcdef";
	if (n == 0)
		return(count = write(1, "0", 1));
	if (n < 0)
	{
		count = write (1, "-", 1);
		n = -n;
		basesymbols = "fedcba9876543210";
	}
	while (n >= base)
	{
		count += ft_print_x(n / base, base);
		n = n % base;
	}
	if (n < base)
	{
		write(1, &basesymbols[n], 1);
		count++;
	}
	return (count);
}



/*
int main(void)
{
	ft_print_x(4350, 16);
}

int	ft_print_x(long n, int base)
{
	int		count;
	char	*symbols;

	symbols = "0123456789abcdef";
	if (n < 0)
	{
		write (1, "-", 1);
		return  ft_print_x(-n, base) + 1;
	}
	else if (n < base)
		return (ft_print_c(symbols[n]));
	else
	{
		count = ft_print_x(n / base, base);
		return (count + ft_print_x(n % base, base));
	}
}





*/