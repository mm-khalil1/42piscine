/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalil <m94khalil@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 16:31:07 by mkhalil           #+#    #+#             */
/*   Updated: 2022/03/24 16:31:10 by mkhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	ret;

	if (nb < 0)
		return (0);
	ret = 1;
	while (nb >= 1)
	{
		ret *= nb;
		nb--;
	}
	return (ret);
}
/*
#include <stdio.h>
int main (void)
{
    printf("%d",ft_iterative_factorial(5));
    return 0;
}*/
