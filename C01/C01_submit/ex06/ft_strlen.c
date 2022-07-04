/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalil <m94khalil@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 14:25:39 by mkhalil           #+#    #+#             */
/*   Updated: 2022/03/18 14:27:57 by mkhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i++] != '\0')
		len++;
	return (len);
}
/*
#include <stdio.h>
int main()
{
    int len;
    char *str;
    str = "HelloWorld";
    len = ft_strlen(str);
    printf("length of \"%s\" is %d", str, len);
    return 0;
}*/
