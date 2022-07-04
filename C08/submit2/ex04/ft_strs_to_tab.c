/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalil <m94khalil@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 14:59:50 by mkhalil           #+#    #+#             */
/*   Updated: 2022/03/31 08:22:27 by mkhalil          ###   ########.fr       */
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

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*var;

	var = malloc(sizeof(t_stock_str) * (ac + 1));
	if (var == NULL || ac <= 0)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		var[i].size = ft_strlen(av[i]);
		var[i].str = av[i];
		var[i].copy = ft_strdup(av[i]);
		i++;
	}
	var[i].size = 0;
	var[i].str = 0;
	var[i].copy = 0;
	return (var);
}
