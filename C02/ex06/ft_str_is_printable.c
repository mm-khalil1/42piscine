/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalil <m94khalil@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 19:13:15 by mkhalil           #+#    #+#             */
/*   Updated: 2022/03/19 19:15:07 by mkhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	flag;

	flag = 1;
	i = -1;
	while (str[++i] != '\0' && flag)
		if (str[i] < ' ' || str[i] > '~')
			flag = 0;
	return (flag);
}
/* 
#include <stdio.h> 
 
int main() 
{ 
    char test1[] = "sd541\n@$FJSF"; 
    char test2[] = "sAAKS$^&*(#^DFJSF"; 
    char test3[] = ""; 
    int flag; 
    flag = ft_str_is_printable(test1); 
    printf("Result for \"%s\" is %d\n",test1, flag);   
    flag = ft_str_is_printable(test2); 
    printf("Result for \"%s\" is %d\n",test2, flag); 
    flag = ft_str_is_printable(test3);  
    printf("Result for \"%s\" is %d\n",test3, flag);    
    return 0; 
}*/
