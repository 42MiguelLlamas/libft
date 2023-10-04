/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mllamas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:46:30 by mllamas-          #+#    #+#             */
/*   Updated: 2023/10/04 18:33:03 by mllamas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_putbase(unsigned int nb, char *base, size_t *count)
{
	unsigned int	len;

	if (!base)
	len = ft_strlen(*base);
	if (nb > len)
	{
		ft_putbase(nb / 10, base, count);
		ft_putbase(nb % 10, base, count);
	}
	else
		ft_putchar(nb + 48, count);
}
