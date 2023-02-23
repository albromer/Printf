/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albromer <albromer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 10:21:36 by albromer          #+#    #+#             */
/*   Updated: 2023/01/31 11:22:39 by albromer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *content, ...)
{
	int		i;
	int		count;
	va_list	arguments;

	i = 0;
	count = 0;
	va_start (arguments, content);
	while (content[i])
	{
		if (content[i] == '%')
		{
			ft_format(arguments, content, i, &count);
			i++;
		}
		else
		{
			ft_putchar(content[i], &count);
		}
		i++;
	}
	va_end(arguments);
	return (count);
}

void	ft_format(va_list arguments, char const *content, int i, int *count)
{
	if (content[i + 1] == 'c')
		ft_putchar(va_arg(arguments, int), count);
	else if (content[i + 1] == 's')
		ft_putstr(va_arg(arguments, char *), count);
	else if (content[i + 1] == 'p')
	{
		ft_putstr("0x", count);
		ft_puthexa(va_arg(arguments, unsigned long long), count);
	}
	else if (content[i + 1] == 'd')
		ft_putnbr(va_arg(arguments, int), count);
	else if (content[i + 1] == 'i')
		ft_putnbr(va_arg(arguments, int), count);
	else if (content[i + 1] == 'u')
		ft_putnbru(va_arg(arguments, unsigned int), count);
	else if (content[i + 1] == 'x')
		ft_putnbrhexa(va_arg(arguments, unsigned int),
			"0123456789abcdef", count);
	else if (content[i + 1] == 'X')
		ft_putnbrhexa(va_arg(arguments, unsigned int),
			"0123456789ABCDEF", count);
	else if (content[i + 1] == '%')
		ft_putchar('%', count);
}
