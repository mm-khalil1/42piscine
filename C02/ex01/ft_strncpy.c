/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalil <m94khalil@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 21:56:13 by mkhalil           #+#    #+#             */
/*   Updated: 2022/03/22 16:48:56 by mkhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		++i;
	}
	while (i < n)
	{
		dest[i] = '\0';
		++i;
	}
	return (dest);
}
/*
#include <stdio.h>

int main(void) {
	
	char src[] = "Test_src";
	char dest1[] = "Test_____1";
	int n = 6;

	printf("before: %s | src=%s\n",dest1,src);
	printf("after: %s | %s\n",ft_strncpy(dest1,src,n),src);
    return (0);
}*/
