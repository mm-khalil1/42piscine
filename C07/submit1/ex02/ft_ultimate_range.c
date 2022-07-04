/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalil <m94khalil@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 08:17:47 by mkhalil           #+#    #+#             */
/*   Updated: 2022/03/27 10:14:39 by mkhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*p;
	int	i;

	if (min >= max)
		return (NULL);
	p = malloc(sizeof(int) * (max - min));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		p[i] = min;
		min++;
		i++;
	}
	return (p);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (min >= max)
		return (0);
	if (*range == NULL)
		return (-1);
	return (max - min);
}
/*
#include <stdio.h>
int	main(void)
{
	int min = -1;
	int max = 9;
	int *temp = &min;
	int **p = &temp;
	int i = 0;
	int size;

	size = ft_ultimate_range(p, min,max);
	if (size == -1)
		return (0);
	printf("size = %d\n",size);
	while (i < max - min)
	{
		printf("%d ",p[0][i]);
		i++;
	}
}*/
