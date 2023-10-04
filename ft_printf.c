/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mllamas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 18:01:50 by mllamas-          #+#    #+#             */
/*   Updated: 2023/10/04 18:31:15 by mllamas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_format(char const *format, va_list args, size_t *count)
{
	if (*format == 'c')
		ft_putchar(va_arg(args, int), count);
	if (*format == 's')
		ft_putstr(va_arg(args, const char *), count);
	if (*format == 'd')
		ft_putnbr(va_arg(args, int), count);
	if (*format == 'i')
		ft_putnbr(va_arg(args, int), count);
	if (*format == 'u')
		ft_putbase(va_arg(args, unsigned int), "0123456789", count);
	if (*format == 'x')
		ft_putbase(va_arg(args, unsigned int), "0123456789abcdef", count);
	if (*format == 'X')
		ft_putbase(va_arg(args, unsigned int), "0123456789ABCDEF", count);
	if (*format == '%')
		ft_putchar('%', count);
}

int	ft_printf(char const *format, ...)
{
	va_list	args;
	int		i;
	size_t	count;

	if (!format)
		return (0);
	i = 0;
	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			ft_format(format, args, &count);
		}
		else
			ft_putchar(*format, &count);
		format++;
	}
	va_end(args);
	if (i != 0)
		return (i);
	return (count);
}

/*
int main(void)
{
	int a;

	a = ft_printf("Char %c, string %s, int %d, int %i, unsigned 10 %u, hex mi
	n %x, hex may %X, porcen %%\n", 'c', "sete", -1224, 123, 1247, 787, 787);
	return(0);
}*/
