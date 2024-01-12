/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recherra <recherra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 20:39:56 by recherra          #+#    #+#             */
/*   Updated: 2024/01/12 20:09:14 by recherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_putstr(char *s);
int	ft_putchar(int c);
int	ft_putnbr(int i);
int	ft_put_unsigned_nbr(unsigned int i);
int	ft_put_hexa_base(unsigned int num, char formatter);
int	ft_put_add(void *ptr);
int	ft_checker(char c, va_list ptr);

#endif
