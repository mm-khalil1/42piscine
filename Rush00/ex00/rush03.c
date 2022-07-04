/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalil <m94khalil@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 13:00:40 by mkhalil           #+#    #+#             */
/*   Updated: 2022/03/13 13:01:24 by mkhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c);

void rush03(int x, int y){
 	int col;
    int row = 1;
	while (row <= y){
		if (x == 0 || y == 0)
			break;
   		col = 1;
		while (col <= x){ 
	    	if (     (row == 1 || row == y) && col == 1)
				ft_putchar('A');
			else if ((row == 1 || row == y) && col == x)
				ft_putchar('C');
			else if ((col > 1 && col < x) && (row > 1 && row < y))
				ft_putchar(' ');
		    else 
				ft_putchar('B');
			col++;
	    }
		ft_putchar('\n');
		row++;
    }
} 
