/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalil <m94khalil@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 19:18:41 by mkhalil           #+#    #+#             */
/*   Updated: 2022/03/19 21:16:27 by mkhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
	return (str);
}
/*
#include <stdio.h> 
 
int main() 
{ 
    char test1[] = "sd5SF"; 
    char test2[] = "sAAKS$edrefFJSF"; 
    printf("Result for test1 is %s\n", ft_strlowcase(test1));   
    printf("Result for test2 is %s\n", ft_strlowcase(test2)); 
    return 0; 
}*/
