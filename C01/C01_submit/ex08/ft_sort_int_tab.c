/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalil <m94khalil@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 14:32:36 by mkhalil           #+#    #+#             */
/*   Updated: 2022/03/18 15:07:49 by mkhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	min;
	int	temp;

	i = 0;
	min = tab[i];
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[i])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}
/*
#include <stdio.h>

int main()
{
	int i = 0;
	int size = 6;
	int tab[]={-5,4,2,1,6,8};

	printf ("Before: tab=");
	while (i < size)
		printf("%d,", tab[i++]);
	ft_sort_int_tab(tab, size); 
	printf ("\nAfter: tab=");
	i = 0;
	while (i < size)
		printf ("%d,", tab[i++]);
	return 0;
}*/
