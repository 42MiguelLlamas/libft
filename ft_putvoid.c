#include "printf.h"

static void	ft_putptrbase(unsigned long nb, char *base, size_t *count)
{
	unsigned long	len;

	if (!base)
	len = ft_strlen(*base);
	if (nb > len)
	{
		ft_putptrbase(nb / 10, base, count);
		ft_putptrbase(nb % 10, base, count);
	}
	else
		ft_putchar(nb + 48, count);
}

void ft_putvoid(void *ptr, char *base, size_t *count)
{
    char    *str;
    unsigned long   address;

    address = (unsigned long)ptr;
    ft_putstr("0x", count);
    ft_putptrbase(address, base, count);
}