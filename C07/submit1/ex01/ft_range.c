/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalil <m94khalil@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 10:11:48 by mkhalil           #+#    #+#             */
/*   Updated: 2022/03/27 09:43:26 by mkhalil          ###   ########.fr       */
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
/*
#include <stdio.h>
int	main(void)
{
	int *p;
	int min = -1;
	int max = 9;
	int i = 0;

	p = ft_range(min,max);
	while(i < max - min)
	{
		printf("%d ",p[i]);
		i++;
	}
}*/
