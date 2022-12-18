/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luhego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:48:13 by luhego            #+#    #+#             */
/*   Updated: 2022/12/18 13:14:49 by luhego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static void	ft_putptr(va_list ap, int *count)
{
	size_t	ptr;

	ptr = va_arg(ap, size_t);
	if (!ptr)
		ft_putstr("(nil)", count);
	else
	{
		ft_putstr("0x", count);
		ft_unsigned_putnbr(ptr, "0123456789abcdef", count);
	}
}

static void	ft_find_type(char c, va_list ap, int *count)
{
	if (c == 'c')
		ft_putchar(va_arg(ap, int), count);
	if (c == 's')
		ft_putstr(va_arg(ap, char *), count);
	if (c == 'p')
		ft_putptr(ap, count);
	if (c == 'd')
		ft_putnbr_base(va_arg(ap, int), "0123456789", count);
	if (c == 'i')
		ft_putnbr_base(va_arg(ap, int), "0123456789", count);
	if (c == 'u')
		ft_putnbr_base(va_arg(ap, unsigned int), "0123456789", count);
	if (c == 'x')
		ft_putnbr_base(va_arg(ap, unsigned int), "0123456789abcdef", count);
	if (c == 'X')
		ft_putnbr_base(va_arg(ap, unsigned int), "0123456789ABCDEF", count);
	if (c == '%')
		ft_putchar('%', count);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	ap;
	int		count;

	count = 0;
	if (!str)
		return (-1);
	i = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%' && ft_strchr("cspdiuxX%", str[i + 1]))
		{
			ft_find_type(str[i + 1], ap, &count);
			i++;
		}
		else
			ft_putchar(str[i], &count);
		i++;
	}
	return (count);
}

int	main(void)
{
	int	i;

	i = 15;
	ft_printf("le resultat de i est = %i", i);
	return (0);
}
