/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalil <m94khalil@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 18:26:21 by mkhalil           #+#    #+#             */
/*   Updated: 2022/03/19 18:31:58 by mkhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	flag;

	flag = 1;
	i = -1;
	while (str[++i] != '\0' && flag)
		if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
			flag = 0;
	return (flag);
}
/*
#include <stdio.h> 
 
int main() 
{ 
    char test1[] = "absfdkjfVCDKSDFN"; 
    char test2[] = "3sdkmadfskk"; 
    char test3[] = ""; 
    int flag; 
    flag = ft_str_is_alpha(test1); 
    printf("Result for \"%s\" is %d\n",test1, flag);   
    flag = ft_str_is_alpha(test2); 
    printf("Result for \"%s\" is %d\n",test2, flag); 
    flag = ft_str_is_alpha(test3);  
    printf("Result for \"%s\" is %d\n",test3, flag);    
    return 0; 
} */
