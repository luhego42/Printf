/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luhego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:49:02 by luhego            #+#    #+#             */
/*   Updated: 2022/12/18 13:14:57 by luhego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int				ft_printf(const char *str, ...);
long long		ft_strlen(const char *s);
void			ft_putchar(char c, int *count);
void			ft_putstr(const char *str, int *count);
char			*ft_strchr(const char *s, int c);
void			ft_putnbr_base(long long nbr, char *base, int *count);
void			ft_unsigned_putnbr(size_t nbr, char *base, int *count);

#endif
