/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_putnbr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luhego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:03:36 by luhego            #+#    #+#             */
/*   Updated: 2022/11/14 17:19:08 by luhego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_unsigned_putnbr(size_t nbr, char *base, int *count)
{
	size_t	base_len;

	base_len = ft_strlen(base);
	if (nbr >= 0 && nbr < base_len)
		ft_putchar(base[nbr], count);
	else
	{
		ft_unsigned_putnbr(nbr / base_len, base, count);
		ft_unsigned_putnbr(nbr % base_len, base, count);
	}
}
