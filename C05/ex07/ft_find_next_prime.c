/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalil <m94khalil@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 16:34:06 by mkhalil           #+#    #+#             */
/*   Updated: 2022/03/26 09:20:14 by mkhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	test;

	if (nb < 2)
		return (0);
	test = 2;
	while (test <= nb / test)
	{
		if (nb % test == 0)
			return (0);
		++test;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
/*
#include <stdio.h>
int main (void)
{
    printf("%d",ft_find_next_prime(47));
    return 0;
}*/
