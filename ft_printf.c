/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luhego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:48:13 by luhego            #+#    #+#             */
/*   Updated: 2022/11/11 00:31:47 by luhego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "printf.h"
/*
void	ft_find_type(char c, ...)
{
	if (c == "%c")
		c = va_arg(ap, int);
	if (c == "%s")
		s = va_arg(ap, int);
	if (c == "%p")
		p = (ap, int);
	if (c == "%d")
		d = va_arg(ap, int);
	if (c == "%i")
		i = va_arg(ap, int);
	if (c == "%u")
		u = va_arg(ap, int)
	if (c == "%x")
		x = va_arg(ap, int);
	if (c == "%X")
		x = va_arg(ap, int);
	if (c == "%%")
		ft_putchar('%');
		
}
	if (%c)
		ft_putchar(c);
	if (%s)
		ft_putstr(s);
	if (%p)
		void *(p, "0123456789ABCDEF");
	if (%d)
		ft_putnbr_base(d, "0123456789");
	if (%i)
		ft_putnbr_base(i, "0123456789");
	if (%u)
		ft_putnbr(u, "0123456789");
	if (%x)
		ft_putnbr(x, "0123456789abcdef");
	if (%X)
		ft_putnbr(X, "0123456789ABCDEF");
	if (%%)
		ft_putchar('%');
		
*/

void	ft_printf(const char *str, ...)
{
	int	i;

	va_list	ap;

	if (!str)
		return ;
	i = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%' && strchr("cspdiuxX%", str[i + 1]))
		{
			ft_find_type(str[i + 1], ap)
		}
		ft_putchar(str[i]);
		i++;
	}
}

int	main(void)
{
	int		un_chiffre = 5;
	int		un_nombre = 25;
	char	une_lettre = 'L';
	char	*une_ligne = "le pingouin";

	ft_printf("le pourcent = %% chiffre est = %i, le nombre est = %d, et la lettre est = %c, la ligne est = %s", un_chiffre, un_nombre, une_lettre, une_ligne);
	write(1, "\n", 1);
	printf("le pourcent = %% le chiffre est = %i, le nombre est = %d, et la lettre est = %c, la ligne est = %s", un_chiffre, un_nombre, une_lettre, une_ligne);
}
