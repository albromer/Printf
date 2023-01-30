/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albromer <albromer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 10:40:27 by albromer          #+#    #+#             */
/*   Updated: 2023/01/30 10:22:32 by albromer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int num, int *count)
{
	if (num == -2147483648)
	{
		ft_putstr("-2147483648", count);
	}
	else
	{
		if (num < 0)
		{
			ft_putchar('-', count);
			num *= -1;
			ft_putnbr(num, count);
		}
		else if (num > 10)
		{
			ft_putnbr((num / 10), count);
			ft_putchar((num % 10 + '0'), count);
		}
		else
		{
			ft_putchar((num % 10 + '0'), count);
		}
	}
}
