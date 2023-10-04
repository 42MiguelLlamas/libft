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
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


void	ft_putstr(char const *s)
{
	int		i;

	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		 ft_putchar(nb + 48);
}

void ft_putbase(unsigned int nb, char *base)
{
	unsigned int len;
	
	len = strlen(base);
	if (nb > len)
	{
		ft_putbase(nb / 10, base);
		ft_putbase(nb % 10, base);
	}
	else
		 ft_putchar(nb + 48);
}
int	ft_printf(char const *format, ...)
{
	va_list args;
	
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
				ft_putchar(va_arg(args, int));
			if (*format == 's')
				ft_putstr(va_arg(args, const char *));
//			if (*format == 'p')
			if (*format == 'd')
				ft_putnbr(va_arg(args, int));
			if (*format == 'i')
				ft_putnbr(va_arg(args, int));
			if (*format == 'u')
				ft_putbase(va_arg(args, unsigned int), "0123456789");
			if (*format == 'x')
				ft_putbase(va_arg(args, unsigned int), "0123456789abcdef");
			if (*format == 'X')
				ft_putbase(va_arg(args, unsigned int), "0123456789ABCDEF");
			if (*format == '%')
				write(1, "%", 1);
		}
		else
			write(1, format, 1);
		format++;		
	}
	return (0);
}

int main(void)
{
	int a;

	a = ft_printf("Char %c, string %s, int %d, int %i, unsigned 10 %u, hex min %x, hex may %X, porcen %%\n", 'c', "sete", -1224, 123, 1247, 787, 787);
	return(0);
}
