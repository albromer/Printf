/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albromer <albromer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 12:06:22 by albromer          #+#    #+#             */
/*   Updated: 2023/01/31 10:52:40 by albromer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *s, int *count)
{
	int	i;

	i = 0;
	if (!s)
	{
		ft_putstr("(null)", count);
		return ;
	}
	write (1, s, ft_strlen(s));
	*count = *count + ft_strlen(s);
}
