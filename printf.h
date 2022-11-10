/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luhego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:49:02 by luhego            #+#    #+#             */
/*   Updated: 2022/11/10 16:46:21 by luhego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PRINTF_H__
# define __PRINTF_H__

# include <unistd.h>
# include <stdarg.h>

long long		ft_strlen(const char *s);
void			ft_putchar(char c);
void			ft_putstr(const char *str);
void			ft_putnbr_base(long long nbr, char *base);

#endif
