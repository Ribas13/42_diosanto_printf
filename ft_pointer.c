/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 17:03:35 by diosanto          #+#    #+#             */
/*   Updated: 2022/11/17 17:36:50 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

/*void	ft_putcharacter_len(char c, int *len)
{
	write(1, &c, 1);
	(*len)++;
}*/

void	ft_pointer(size_t p, int *len)
{
	char	str[25];
	char	*base;
	int		i;

	base = "0123456789abcdef";
	i = 0;
	if (p == 0)
	{
		ft_putcharacter_len('0', len);
		return ;
	}
	while (p != 0)
	{
		str[i] = base[p % 16];
		p /= 16;
		i++;
	}
	while (i != 0)
	{
		ft_putcharacter_len(str[i], len);
		i--;
	}
}
