/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalil <m94khalil@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 22:00:44 by mkhalil           #+#    #+#             */
/*   Updated: 2022/03/19 22:01:24 by mkhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	flag;

	flag = 1;
	i = -1;
	while (str[++i] != '\0' && flag)
		if (str[i] < 'a' || str[i] > 'z')
			flag = 0;
	return (flag);
}
/*
#include <stdio.h> 
 
int main() 
{ 
    char test1[] = "Aabsfdkj"; 
    char test2[] = "sdkmadfskk"; 
    char test3[] = ""; 
    int flag; 
    flag = ft_str_is_lowercase(test1); 
    printf("Result for \"%s\" is %d\n",test1, flag);   
    flag = ft_str_is_lowercase(test2); 
    printf("Result for \"%s\" is %d\n",test2, flag); 
    flag = ft_str_is_lowercase(test3);  
    printf("Result for \"%s\" is %d",test3, flag);    
    return 0; 
}*/
