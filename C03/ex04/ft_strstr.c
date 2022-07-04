/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalil <m94khalil@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 14:54:10 by mkhalil           #+#    #+#             */
/*   Updated: 2022/03/21 14:55:18 by mkhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	find_size;

	if (to_find[0] == '\0')
		return (str);
	find_size = 0;
	i = -1;
	while (to_find[++i] != '\0')
		find_size++;
	i = -1;
	while (str[++i] != '\0')
	{
		j = 0;
		while (to_find[j] == str[i + j] && str[i + j] != '\0')
			j++;
		if (j == find_size)
			return (&str[i]);
	}
	return (0);
}
