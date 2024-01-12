/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recherra <recherra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 18:09:11 by recherra          #+#    #+#             */
/*   Updated: 2024/01/12 20:06:08 by recherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		j;
	int		i;
	va_list	ptr;

	j = 0;
	i = 0;
	va_start(ptr, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (!str[i + 1])
				return (j);
			j += ft_checker(str[++i], ptr);
		}
		else
			j += ft_putchar(str[i]);
		i++;
	}
	va_end(ptr);
	return (j);
}
