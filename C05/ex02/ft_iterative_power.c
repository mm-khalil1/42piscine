/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalil <m94khalil@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 16:32:12 by mkhalil           #+#    #+#             */
/*   Updated: 2022/03/24 16:32:32 by mkhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	ans;

	if ((nb == 0 && power == 0) || (nb != 0 && power == 0))
		return (1);
	if (power < 0)
		return (0);
	ans = 1;
	while (power > 0)
	{
		ans *= nb;
		power--;
	}
	return (ans);
}
/*
#include <stdio.h>
int main (void)
{
    printf("%d",ft_iterative_power(0,0));
    return 0;
}*/
