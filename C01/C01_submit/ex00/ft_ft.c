/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalil <m94khalil@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 13:58:03 by mkhalil           #+#    #+#             */
/*   Updated: 2022/03/18 14:12:29 by mkhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*#include <stdio.h>
int main()
{
    int a;
    int *nbr;

    a = 5;
    nbr = &a;

    printf("Before: a=%d\n",a);
    ft_ft(nbr);
    printf("After: a=%d",a);
    return 0;
}
*/
