/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforster <sforster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:34:45 by sforster          #+#    #+#             */
/*   Updated: 2023/11/15 11:28:06 by sforster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

int ft_printf(const char *, ...)
{
	int	count;
	int	i;

	while (const char *[i])
	{
		if (i != '%')
		{
			write (1, &[i], 1)
		}
		if (i == '%')
		{
			write (1, 'd', 1)
		}

	}
// commencer par imprimer le texte obligatoire. 

// trouver combien il ya de % dans le texte, donc combien d arguments

// checking for errors

// ensuite imprimer les variadics arguments
// declaring pointer to the argument list
	va_list	args;

// initializing arguement to the list pointer 
	va_start(args, num);
	while (...)
	{
		do something ... va_arg(args, int)
	}

	va_end(args);

	return (count);
}
