/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:58:47 by diosanto          #+#    #+#             */
/*   Updated: 2022/11/18 15:09:38 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
/*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/
//# include "Libft/libft.h"
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
/*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/
typedef struct s_data
{
	int	count;
}		t_data;

// Protoypes

void			ft_putcharacter_len(char c, int *len);
void			ft_string(char *args, int *len);

void			ft_putnbr_len(int n, int *len);
void			ft_hexa_len(unsigned int x, int *len, char x_or_x);
void			ft_unsigned_int_len(unsigned int u, int *len);
void			ft_pointer(size_t p, int *len);

int				ft_printf(const char *string, ...);

#endif
