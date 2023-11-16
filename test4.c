/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:38:27 by sforster          #+#    #+#             */
/*   Updated: 2023/11/16 20:18:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

int	ft_testarg(int n, ...)
{
	int	sum;
	int i;

	i = 0;
	sum = 0;
// pourquoi ptr??
// declaring pointer to the argument list
	va_list	ptr;

//initializing argument to the list pointer
	va_start(ptr, n);
	while (i < n)
	{
//accessing current variable and pointing to the next one
		sum += va_arg(ptr, int);
		i++;
	}
//ending argument list traversal
	va_end(ptr);
	return (sum);
}

int main(void)
{
	printf("\nVariadic functions:\n");
	printf("3 + 4 + 5 + 2 = %d", ft_testarg(4, 3, 4, 5, 2));
	return (0);
}