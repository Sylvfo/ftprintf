/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 10:35:19 by marvin            #+#    #+#             */
/*   Updated: 2023/11/16 10:35:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	size_t			*content_size;
	struct s_list	*next;
}					t_list;

int		ft_printf(const char *f, ...);
int		ft_print_c(int c);
int		ft_print_s(char *str);
int		ft_print_d(long n, int base);
int		ft_print_x(unsigned int n, int base);
int		ft_print_xup(unsigned int n, int base);
int		ft_print_i(long i, int base);
int		ft_print_u(unsigned int n, int base);
int		ft_print_p(void* a);

#endif