/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mllamas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 18:01:50 by mllamas-          #+#    #+#             */
/*   Updated: 2023/10/03 19:45:51 by mllamas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


int	ft_printf(char const *format, ...)
{
	va_list args;
	
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			if (*(format + 1) == 'c')
				write(1, va_arg(args, char), 1);
			if (*(format + 1) == 's')
	
			if (*(format + 1) == 'p')
			if (*(format + 1) == 'd')
			if (*(format + 1) == 'i')
			if (*(format + 1) == 'u')
			if (*(format + 1) == 'x')
			if (*(format + 1) == 'X')
			if (*(format + 1) == '%')
				write(1, *(format + 1), 1);
			format++;
		else
			write(1, *format, 1);
		}
	}
	return (0);
}

int ft_checkformat(char const *format)
{
	if (*format != '%')
		return (1);
}
