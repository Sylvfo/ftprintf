/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 13:23:45 by marvin            #+#    #+#             */
/*   Updated: 2023/11/19 13:23:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

int	nblong(int n)
{
	int	count;

	count = 0;
	while (n > 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_intochar(unsigned int un)
{
	char	*num;
	int		i;

	i = nblong(un);
	num = malloc(i * sizeof(char));
	if (num == NULL)
		return (NULL);
	num[i] = 0;
	while (un != 0)
	{
		num[i - 1] = (un % 10) + '0';
		un = un / 10;
		i--;
	}
	return (num);
}

int	ft_print_d(int n)
{
	unsigned int	un;
	char			*num;
	int				count;
	int				i;

	i = 0;
	count = 0;
	if (n == 0)
		num = ft_strdup("0");
	else
	{
		if (n < 0)
		{
			write (1, "-", 1);
			count++;
			un = -n;
		}
		else
			un = n;
		num = ft_intochar(un);
	}
	count += ft_print_s(num);
	free(num);
	return (count);
}

/*
char	*ft_intochar(int un)
{
	char	*num;
	int		i;

	num = (char *)malloc((nblong(un)) * sizeof(char));
	i = 0;
	while (un != 0)
	{
		num[i] = (un % 10) + '0';
		un = un / 10;
		i++;
	}
	num[i] = '\0';
	i = 0;
	return (num);
}


int	ft_print_d(int n)
{
	unsigned int	un;
	char			*num;
	int				count;
	int				i;

	i = 0;
	count = 0;
	if (n < 0)
	{
		write (1, "-", 1);
		un = -n;
		count++;
	}
	if (un == 0)
	{
		write (1, "0", 1);
		count++;
	}
	else
		un = n;
	num = ft_intochar(un);
	while (num[i] && num[i] != '\0')
	{
		write (1, &num[i], 1);
		i++;
		count++;
	}
	free(num);
	return (count);
}



fonctionne
int	ft_print_d(int n)
{
	unsigned int	un;
	char			*num;
	int				count;
	int				i;

	i = 0;
	count = 0;
	if (n == 0)
		num = ft_strdup("0");
	if (n < 0)
	{
		write (1, "-", 1);
		count++;
		un = -n;
	}
	else
		un = n;
	if (n != 0)
		num = ft_intochar(un);
	while (num[i] && num[i] != '\0')
	{
		write (1, &num[i], 1);
		i++;
		count++;
	}
	free(num);
	return (count);
}

*/