/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalil <m94khalil@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 14:19:50 by mkhalil           #+#    #+#             */
/*   Updated: 2022/03/18 16:47:51 by mkhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>
int main()
{
    int a = 5, b=2, aa=100, bb=200;
    int *div, *mod;
    div = &aa;
    mod = &bb;
    printf("Before: div pointing to %d and mod pointing to %d\n", *div, *mod);
    ft_div_mod(a, b, div, mod);
	printf("Dividing %d by %d: div=%d and mod=%d,\n", a, b, *div, *mod);
    return 0;
}*/
