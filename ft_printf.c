/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 11:36:34 by diosanto          #+#    #+#             */
/*   Updated: 2022/11/17 16:39:20 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include "ft_printf.h"

static void	ft_printf_checker(char s, va_list *arg, int len, int *i)
{
	if (s == 'c')
		ft_putcharacter_len(va_arg (*arg, int), len);
	else if (s == 's')
		ft_string(va_arg (*arg, char *), len);
	else if (s == 'p')
		ft_pointer(va_arg (*arg, size_t), len);
	else if (s == 'i' || s == 'd')
		ft_putnbr_len(va_arg (*arg, int), len);
	else if (s == 'u')
		ft_unsigned_int_len(va_arg (*arg, unsigned int), len);
	else if (s == 'x')
		ft_hexa_len(va_arg (*arg, unsigned int), len, 'x');
	else if (s == 'X')
		ft_hexa_len(va_arg (*arg, unsigned int), len, 'X');
	else if (s == '%')
		ft_putcharacter_len('%', len);
	else
		(*i)--;
}

int	ft_printf(const char *format, ...)
{
	unsigned int	i;
	unsigned int	len;
	va_list			arg;

	i = 0;
	len = 0;
	va_start (arg, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			ft_printf_checker(format[i], &arg, &len, &i);
			i++;
		}
		else
		{
			ft_putchar_l((char)format[i], &len);
			i++;
		}
	}
	va_end (arg);
	return (len);
}

/*int	main(void)
{
	char	*str;
	int		i;

	str = "Hello";
	i = 65;
	printf("original:\n%s\n%i", str, i);
	ft_printf("original:\n%s\n%i", str, i);
}*/