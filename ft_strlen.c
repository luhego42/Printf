/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luhego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:11:23 by luhego            #+#    #+#             */
/*   Updated: 2022/12/18 12:52:40 by luhego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

long long	ft_strlen(const char *str)
{
	long long	count;

	count = 0;
	if (!str)
		return (0);
	while (str[count])
		count++;
	return (count);
}
