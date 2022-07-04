/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalil <m94khalil@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 19:16:16 by mkhalil           #+#    #+#             */
/*   Updated: 2022/03/19 19:18:03 by mkhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	return (str);
}
/*
#include <stdio.h> 
 
int main() 
{ 
    char test1[] = "sd5SF"; 
    char test2[] = "sAAKS$edrefFJSF"; 
    printf("Result for test1 is %s\n", ft_strupcase(test1));   
    printf("Result for test2 is %s\n", ft_strupcase(test2)); 
   return 0; 
}*/
