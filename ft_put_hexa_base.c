/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hexa_base.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recherra <recherra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 16:17:05 by recherra          #+#    #+#             */
/*   Updated: 2024/01/10 17:47:42 by recherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_put_hexa_base(unsigned long int num, char formatter)
{
    int j;
    char *base;

    base = NULL;

    if (formatter == 'x')
        base = "0123456789abcdef";
    else if (formatter == 'X')
        base = "0123456789ABCDEF";
    j = 0;
    if (num >= 16)
        j += ft_put_hexa_base(num / 16, formatter);
    j += write(1, &base[num % 16], 1);
    return j;
}