/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_xup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 22:18:31 by marvin            #+#    #+#             */
/*   Updated: 2023/11/23 22:18:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_xup(unsigned int n, int base)
{
	int		count;
	char	*symbbase;

	count = 0;
	symbbase = "0123456789ABCDEF";
	if (n == 0)
		return (count = write(1, "0", 1));
	while (n >= (unsigned int) base)
	{
		count += ft_print_xup(n / base, base);
		n = n % base;
	}
	if (n < (unsigned int) base)
		count += write (1, &symbbase, 1);
	return (count);
}