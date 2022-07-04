/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalil <m94khalil@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 19:02:12 by mkhalil           #+#    #+#             */
/*   Updated: 2022/03/19 19:05:55 by mkhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	flag;

	flag = 1;
	i = -1;
	while (str[++i] != '\0' && flag)
		if (str[i] < '0' || str[i] > '9')
			flag = 0;
	return (flag);
}
/*
#include <stdio.h> 
 
int main() 
{ 
    char test1[] = "2154542"; 
    char test2[] = "A62121"; 
    char test3[] = ""; 
    int flag;
    flag = ft_str_is_numeric(test1); 
    printf("Result for \"%s\" is %d\n",test1, flag);   
    flag = ft_str_is_numeric(test2); 
    printf("Result for \"%s\" is %d\n",test2, flag); 
    flag = ft_str_is_numeric(test3);  
    printf("Result for \"%s\" is %d",test3, flag);    
    return 0; 
}*/
