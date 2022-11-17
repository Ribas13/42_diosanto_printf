/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_int_len.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 17:05:24 by diosanto          #+#    #+#             */
/*   Updated: 2022/11/17 17:37:08 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

/*void	ft_putcharacter_len(char c, int *len)
{
	write(1, &c, 1);
	(*len)++;
}*/

void	ft_unsigned_int_len(unsigned int u, int *len)
{
	if (u > 9)
		ft_unsigned_int_len(u / 10, len);
	ft_putcharacter_len(u % 10 + '0', len);
}
