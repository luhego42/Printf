/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnrb_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luhego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:07:52 by luhego            #+#    #+#             */
/*   Updated: 2022/11/10 16:45:34 by luhego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putnbr_base(long long nbr, char *base)
{
	long long	base_len;

	base_len = ft_strlen(base);
	if (nbr >= 0 && nbr <= base_len)
		ft_putchar(base[nbr]);
	else if (nbr < 0)
	{
		ft_putchar('-');
		ft_putnbr_base(nbr * (-1), base);
	}
	else
	{
		ft_putnbr_base(nbr / base_len, base);
		ft_putnbr_base(nbr % base_len, base);
	}
}
