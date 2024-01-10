/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_add.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recherra <recherra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:47:06 by recherra          #+#    #+#             */
/*   Updated: 2024/01/10 20:29:55 by recherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_put_add_hexa(unsigned long int num)
{
	int		j;
	char	*base;

	base = "0123456789abcdef";
	j = 0;
	if (num >= 16)
		j += ft_put_add_hexa(num / 16);
	j += write(1, &base[num % 16], 1);
	return (j);
}

int	ft_put_add(void *ptr)
{
	int					j;
	unsigned long int	nbr;

	nbr = (unsigned long int)ptr;
	j = 0;
	j += write(1, "0x", 2);
	j += ft_put_add_hexa(nbr);
	return (j);
}
