/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recherra <recherra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:24:17 by recherra          #+#    #+#             */
/*   Updated: 2024/01/10 16:12:49 by recherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr(int i)
{
    long nbr;
    int j;

    j = 0;
    nbr = i;
    if (nbr < 0)
    {
        nbr = -nbr;
        j += write(1, "-", 1);
    }
    if (nbr > 9)
    {
        j += ft_putnbr(nbr / 10);
        j += ft_putchar((nbr % 10) + '0');
    }
    else
        j += ft_putchar(nbr + '0');
    return (j);
}