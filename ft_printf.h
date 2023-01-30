/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albromer <albromer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 10:21:52 by albromer          #+#    #+#             */
/*   Updated: 2023/01/30 10:19:15 by albromer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int		ft_printf(char const *content, ...);

void	ft_format(va_list arguments, char const *content, int i, int *count);

void	ft_putchar(char c, int *count);

void	ft_puthexa(unsigned long long num, int *count);

void	ft_putnbr(int num, int *count);

void	ft_putnbru(unsigned int num, int *count);

void	ft_putstr(char *s, int *count);

size_t	ft_strlen(const char *s);

void	ft_putnbrhexa(unsigned long long num, char *base, int *count);

#endif
