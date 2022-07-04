/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalil <m94khalil@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 16:33:10 by mkhalil           #+#    #+#             */
/*   Updated: 2022/03/27 07:30:31 by mkhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	test;

	if (nb <= 0 || 46340 * 46340 < nb)
		return (0);
	test = 1;
	while (test * test <= nb)
	{
		if (test * test == nb)
			return (test);
		++test;
	}
	return (0);
}
/*
#include <stdio.h>
int main (void)
{
	printf("\nCalling ft_sqrt(int nb);\n\n");
	printf("nb = 0		 | ret = %d		| Expected = 0\n",ft_sqrt(0));
	printf("nb = -3		 | ret = %d		| Expected = 0\n",ft_sqrt(-3));
	printf("nb = 1		 | ret = %d		| Expected = 1\n",ft_sqrt(1));
	printf("nb = 2		 | ret = %d		| Expected = 0\n",ft_sqrt(2));
	printf("nb = 2147483646	 | ret = %d		| Expected = 0\n",ft_sqrt(2147483646));
	printf("nb = 30591961	 | ret = %d		| Expected = 5531\n",ft_sqrt(30591961));
	printf("nb = 256128016 	 | ret = %d		| Expected = 16004\n",ft_sqrt(256128016));
	printf("nb = 267747769	 | ret = %d		| Expected = 16363\n",ft_sqrt(267747769));
	printf("nb = 2147395600	 | ret = %d		| Expected = 46340\n",ft_sqrt(2147395600));
    return 0;
}*/
