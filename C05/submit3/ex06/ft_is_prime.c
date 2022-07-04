/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalil <m94khalil@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 16:33:44 by mkhalil           #+#    #+#             */
/*   Updated: 2022/03/27 07:34:29 by mkhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	test;

	if (nb <= 1)
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
/*
#include <stdio.h>
int main (void)
{
    printf("%d",ft_is_prime(0));
    return 0;
}*/
