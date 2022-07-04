/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalil <m94khalil@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 14:59:50 by mkhalil           #+#    #+#             */
/*   Updated: 2022/03/29 06:37:21 by mkhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

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

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	int			total_c_size;
	t_stock_str	*var;

	total_c_size = 0;
	i = -1;
	while (++i < ac)
		total_c_size += ft_strlen(*av[i]) + 1;
	total_c_size = total_c_size * 2 + 2;
	var = malloc(sizeof(char) * total_c_size + sizeof(int) * (ac + 1));
	if (var == NULL || ac <= 0)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		var[i].size = ft_strlen(av[i]);
		var[i].str = ft_strcpy(av[i]);
		var[i].copy = ft_strcpy(av[i]);
		i++;
	}
	var[i].size = 0;
	var[i].str = 0;
	var[i].copy = 0;
	return (var);
}
