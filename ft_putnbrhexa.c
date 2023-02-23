/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrhexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albromer <albromer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:23:08 by albromer          #+#    #+#             */
/*   Updated: 2023/01/31 11:54:09 by albromer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbrhexa(unsigned long long num, char *base, int *count)
{
	if (num >= 16)
	{
		ft_putnbrhexa((num / 16), base, count);
		ft_putchar(base[num % 16], count);
	}
	else
	{
		ft_putchar(base[num % 16], count);
	}
}
