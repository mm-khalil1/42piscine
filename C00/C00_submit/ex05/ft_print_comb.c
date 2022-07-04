/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalil <m94khalil@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 14:17:06 by mkhalil           #+#    #+#             */
/*   Updated: 2022/03/15 18:58:26 by mkhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_digits(int num1, int num2, int num3)
{
	ft_putchar(num1 + '0');
	ft_putchar(num2 + '0');
	ft_putchar(num3 + '0');
	if ((num1 + num2 + num3) != 24)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	num1;
	int	num2;
	int	num3;

	num1 = 0;
	while (num1 <= 9)
	{
		num2 = 0;
		while (num2 <= 9)
		{
			num3 = 0;
			while (num3 <= 9)
			{
				if ((num1 < num2) && (num2 < num3) && (num1 < num3))
				{
					print_digits(num1, num2, num3);
				}
				num3++;
			}
			num2++;
		}
		num1++;
	}
}
