/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recherra <recherra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 20:39:56 by recherra          #+#    #+#             */
/*   Updated: 2024/01/10 17:49:38 by recherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
#define FT_PRINTF

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

int ft_printf(const char *, ...);
int ft_putstr(char *s);
int ft_putchar(int c);
int ft_putnbr(int i);
int ft_put_unsigned_nbr(unsigned int i);
int ft_put_hexa_base(unsigned long int, char formatter);
int ft_put_add(unsigned long int add);

#endif