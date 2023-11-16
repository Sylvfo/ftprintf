/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:55:01 by sforster          #+#    #+#             */
/*   Updated: 2023/11/16 20:18:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

//https://onepunchcoder.medium.com/variadic-functions-explained-fd3b4ab6fd84

void	ft_testarg2(const char *separator, unsigned int n, ...)
{
	unsigned int i;
// va chercher string. 
	char *str;

	i = 0;
// declaring pointer to the argument list
	va_list	vsprint;

//initializing argument to the list pointer
	va_start(vsprint, n);
	while (i < n)
	{
// pas compris
// accessing current variable and pointing to the next one
		str = va_arg(vsprint, char *);
		if (separator != NULL && i > 0)
			printf("%s", separator);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		i++;
	}
//ending argument list traversal
	va_end(vsprint);
	printf("\n");
}

int main(void)
{
	ft_testarg2(", ", 4, "Jay", "Django", "Jenny", "Jones");
	return (0);
}