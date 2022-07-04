/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalil <m94khalil@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 10:14:48 by mkhalil           #+#    #+#             */
/*   Updated: 2022/03/27 10:15:16 by mkhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	last_ind;

	last_ind = ft_strlen(dest);
	i = 0;
	while (src[i])
	{
		dest[last_ind + i] = src[i];
		i++;
	}
	dest[last_ind + i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		total_len;
	char	*join;

	if (size <= 0)
		return (NULL);
	i = -1;
	total_len = 0;
	while (++i < size)
		total_len += ft_strlen(strs[i]);
	join = malloc(sizeof(char) * (total_len + size));
	if (join == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ft_strcat(join, strs[i]);
		if (i < (size - 1))
			ft_strcat(join, sep);
		i++;
	}
	join[total_len + size] = '\0';
	return (join);
}
/*
#include <stdio.h>
int	main(int a, char **strs)
{
	char	*sep = "-";

	printf("%s", ft_strjoin(a, strs, sep));
	return (0);
}*/
