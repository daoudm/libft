/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaoud <mdaoud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 17:12:06 by mdaoud            #+#    #+#             */
/*   Updated: 2018/11/11 18:30:33 by mdaoud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_check(int num)
{
	if (num == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (1);
	}
	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	return (0);
}

void			ft_putnbr(int n)
{
	int		buff[15];
	int		i;

	if (ft_check(n))
		return ;
	i = 0;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	while (n)
	{
		buff[i++] = n % 10;
		n /= 10;
	}
	while (--i >= 0)
		ft_putchar(buff[i] + '0');
}
