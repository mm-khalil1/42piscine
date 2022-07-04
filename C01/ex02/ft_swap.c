/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalil <m94khalil@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 14:18:42 by mkhalil           #+#    #+#             */
/*   Updated: 2022/03/18 14:14:31 by mkhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int	*a, int	*b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <stdio.h>
int main()
{
    int aa = 1, bb=2;
    int *a, *b;
    a = &aa;
    b = &bb;
    printf("Before: a=%d and b=%d,\n", *a, *b);
    ft_swap(a, b);
	printf("After: a=%d and b=%d,\n", *a, *b);
    return 0;
}
*/
