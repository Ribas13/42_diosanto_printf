/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:58:47 by diosanto          #+#    #+#             */
/*   Updated: 2022/11/15 11:58:49 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

// Standard C Libraries

# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>

// Protoypes

void			ft_putcharacter_len(char character, int *length);
void			ft_string(char *args, int *length);

void			ft_putnbr_len(int number, int *length);
void			ft_hexa_len(unsigned int x, int *length, char x_or_x);
void			ft_unsigned_int_len(unsigned int u, int *length);
void			ft_pointer(size_t pointer, int *length);

int				ft_printf(const char *string, ...);

#endif
