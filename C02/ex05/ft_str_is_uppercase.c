/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalil <m94khalil@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 19:10:12 by mkhalil           #+#    #+#             */
/*   Updated: 2022/03/19 19:12:02 by mkhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	flag;

	flag = 1;
	i = -1;
	while (str[++i] != '\0' && flag)
		if (str[i] < 'A' || str[i] > 'Z')
			flag = 0;
	return (flag);
}
/*
#include <stdio.h> 
 
int main() 
{ 
    char test1[] = "AAKSDFJSF"; 
    char test2[] = "sAAKSDFJSF"; 
    char test3[] = ""; 
    int flag; 
    flag = ft_str_is_uppercase(test1); 
    printf("Result for \"%s\" is %d\n",test1, flag);   
    flag = ft_str_is_uppercase(test2); 
    printf("Result for \"%s\" is %d\n",test2, flag); 
    flag = ft_str_is_uppercase(test3);  
    printf("Result for \"%s\" is %d",test3, flag);    
    return 0; 
}*/
