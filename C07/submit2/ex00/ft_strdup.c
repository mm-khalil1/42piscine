/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalil <m94khalil@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 10:11:08 by mkhalil           #+#    #+#             */
/*   Updated: 2022/03/27 11:44:46 by mkhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <errno.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*p;

	i = 0;
	while (src[i] != '\0')
		i++;
	p = malloc(sizeof(char) * (i + 1));
	if (p == NULL)
	{
		errno = ENOMEM;
		return (NULL);
	}
	i = -1;
	while (src[++i] != '\0')
		p[i] = src[i];
	p[i] = '\0';
	return (p);
}
/*
#include <stdio.h>
int	main()
{
	char *original = "Hello, world";
	char *copy = ft_strdup(original);
	printf("Original=\"%s\"\nCopy    =\"%s\"\n", original, copy);
}*/
