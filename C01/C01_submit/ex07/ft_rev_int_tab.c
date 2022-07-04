/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalil <m94khalil@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 14:28:37 by mkhalil           #+#    #+#             */
/*   Updated: 2022/03/18 15:13:05 by mkhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while ((i < size / 2) && size > 0)
	{
		temp = tab [i];
		tab [i] = tab [size - i - 1];
		tab [size - i - 1] = temp;
		i++;
	}
}
/*
#include <stdio.h>
int main() {
    int tab[]={1,2,3,4,5,6};
    int i = 0, size = 6;
    printf("Before: array is ");
    while (i < size)
        printf("%d,",tab[i++]);
    i = 0;
    ft_rev_int_tab(tab, size);
    printf("\nAfter: array is ");
    while (i < size)
        printf("%d,",tab[i++]);
    return 0;
}*/
