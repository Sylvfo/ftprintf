/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 22:06:56 by marvin            #+#    #+#             */
/*   Updated: 2023/11/23 22:06:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_u(unsigned int n, int base)
{
	int		count;
	char	*basesymb;

	basesymb = "0123456789";
	count = 0;
	if (n == 0)
		return (count = write (1, "0", 1));
	while (n >= (unsigned int)base)
	{
		count += ft_print_u(n / (unsigned int)base, base);
		n = n % base;
	}
	if (n < (unsigned int)base)
	{
		write(1, &basesymb[n], 1);
		count++;
	}
	return (count);
}
