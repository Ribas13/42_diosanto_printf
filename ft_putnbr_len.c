/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:02:17 by diosanto          #+#    #+#             */
/*   Updated: 2022/11/17 17:22:18 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <unistd.h>

void	ft_putcharacter_len(char c, int *len)
{
	write(1, &c, 1);
	(*len)++;
}

void	ft_putnbr_len(int n, int *len)
{
	int	nbr;

	nbr = n;
	if (nbr == 2147483647)
	{
		write(1, "2147483647", 11);
		(*len) += 11;
		return ;
	}
	if (nbr < 0)
	{
		ft_putcharacter_len('-', len);
		ft_putnbr_len(nbr * -1, len);
	}
	else
	{
		if (nbr > 9)
			ft_putnbr_len(nbr / 10, len);
		ft_putcharacter_len(nbr % 10 + '0', len);
	}
}
