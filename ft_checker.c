/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recherra <recherra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 18:21:31 by recherra          #+#    #+#             */
/*   Updated: 2024/01/10 19:57:22 by recherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_checker(char c, va_list ptr)
{
    int j;

    j = 0;
    if (c == 'd' || c == 'i')
        j += ft_putnbr(va_arg(ptr, int));
    else if (c == 'u')
        j += ft_put_unsigned_nbr(va_arg(ptr, unsigned int));
    else if (c == 'x' || c == 'X')
        j += ft_put_hexa_base(va_arg(ptr, unsigned int), c);
    else if (c == 's')
        j += ft_putstr(va_arg(ptr, char *));
    else if (c == 'c')
        j += ft_putchar(va_arg(ptr, int));
    else if (c == 'p')
        j += ft_put_add(va_arg(ptr, void *));
    return j;
}
