/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mllamas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 18:01:50 by mllamas-          #+#    #+#             */
/*   Updated: 2023/10/02 12:38:21 by mllamas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


int	ft_printf(char const *format, ...)
{
	va_list args;

	if (ft_checkformat(format) == 1);
		return (1);
	return (0);
}

int ft_checkformat(char const *format)
{
	if (*format != '%')
		return (1);
}
