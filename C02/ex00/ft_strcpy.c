/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalil <m94khalil@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 16:19:35 by mkhalil           #+#    #+#             */
/*   Updated: 2022/03/18 20:02:40 by mkhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int main(void) {
	
	char src[] = "Test_Src";
	char dest[] = "Test_Dest";
	char ret[] = "Return";

	printf("ret = %s | dest = %s | src = %s\n",ret,dest,src);
	printf("ret = %s | dest = %s | src = %s\n",ft_strcpy(dest,src),dest,src);
    return (0);
}*/
