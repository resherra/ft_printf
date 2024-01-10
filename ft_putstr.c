/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recherra <recherra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 21:41:08 by recherra          #+#    #+#             */
/*   Updated: 2024/01/10 20:34:19 by recherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	if (!s)
	{
		return (j += write(1, "(null)", 6));
	}
	while (s[i])
	{
		j += ft_putchar(s[i]);
		i++;
	}
	return (j);
}
