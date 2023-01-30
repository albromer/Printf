/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albromer <albromer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 12:23:20 by albromer          #+#    #+#             */
/*   Updated: 2023/01/26 11:29:27 by albromer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexa(unsigned long long num, int *count)
{
	if (num >= 16)
	{
		ft_puthexa(num / 16, count);
	}
	ft_putchar("0123456789abcdef" [num % 16], count);
}
