/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalil <m94khalil@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 14:22:16 by mkhalil           #+#    #+#             */
/*   Updated: 2022/03/18 14:17:11 by mkhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *b;
	*b = *a % *b;
	*a = *a / temp;
}
/*
#include <stdio.h>
int main()
{
    int aa=5, bb=2;
    int *a, *b;
    a = &aa;
    b = &bb;
    printf("Before: a=%d and b=%d\n", aa, bb);
    ft_ultimate_div_mod(a, b);
	printf("After: a=%d and b=%d", aa, bb);
    return 0;
}
*/
