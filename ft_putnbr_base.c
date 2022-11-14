/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luhego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:07:52 by luhego            #+#    #+#             */
/*   Updated: 2022/11/14 16:47:56 by luhego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(long long nbr, char *base, int *count)
{
	long long	base_len;

	base_len = ft_strlen(base);
	if (nbr >= 0 && nbr < base_len)
		ft_putchar(base[nbr], count);
	else if (nbr < 0)
	{
		ft_putchar('-', count);
		ft_putnbr_base(nbr * (-1), base, count);
	}
	else
	{
		ft_putnbr_base(nbr / base_len, base, count);
		ft_putnbr_base(nbr % base_len, base, count);
	}
}
