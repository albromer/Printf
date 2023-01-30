/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbru.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albromer <albromer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 10:57:00 by albromer          #+#    #+#             */
/*   Updated: 2023/01/30 10:19:33 by albromer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbru(unsigned int num, int *count)
{
	if (num < 10)
	{
		ft_putchar((num % 10 + '0'), count);
	}
	else
	{
		ft_putnbru(num / 10, count);
		ft_putchar((num % 10 + '0'), count);
	}
}
