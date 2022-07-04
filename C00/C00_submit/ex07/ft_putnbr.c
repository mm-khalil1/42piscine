/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalil <m94khalil@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 15:01:06 by mkhalil           #+#    #+#             */
/*   Updated: 2022/03/15 19:35:02 by mkhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	test;
	int	num;

	test = 1000000000;
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	while (nb != 0)
	{
		if ((nb / test) != 0)
			break ;
		test /= 10;
	}
	while (test > 1)
	{
		num = nb / test;
		ft_putchar(num + '0');
		nb = nb - num * test;
		test /= 10;
	}
	ft_putchar(nb % 10 + '0');
}
