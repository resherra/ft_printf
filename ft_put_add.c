/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_add.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recherra <recherra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:47:06 by recherra          #+#    #+#             */
/*   Updated: 2024/01/10 17:47:44 by recherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_put_add(unsigned long int add)
{
    int j;
    j = 0;

    j += write(1, "0x", 2);
    j += ft_put_hexa_base(add, 'x');

    return j;
}