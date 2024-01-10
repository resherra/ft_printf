/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recherra <recherra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 18:09:11 by recherra          #+#    #+#             */
/*   Updated: 2024/01/10 20:02:40 by recherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *str, ...)
{
    int j;
    int i;
    va_list ptr;

    j = 0;
    i = 0;
    va_start(ptr, str);
    while (str[i])
    {
        if (str[i] == '%')
        {
            if (str[i + 1] == '%')
                j += write(1, "%", 1);
            else if (!str[i + 1])
                return j;
            j += ft_checker(str[++i], ptr);
        }
        else
            j += write(1, &str[i], 1);
        i++;
    }
    return j;
}