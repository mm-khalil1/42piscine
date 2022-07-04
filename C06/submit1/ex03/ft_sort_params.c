/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalil <m94khalil@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 10:35:53 by mkhalil           #+#    #+#             */
/*   Updated: 2022/03/24 11:10:44 by mkhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = -1;
	while (s1[++i] != '\0' && s2[i] != '\0' )
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	if (s1[i] != '\0' || s2[i] != '\0')
		return (s1[i] - s2[i]);
	else
		return (0);
}

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
		write(1, &str[i], 1);
}

int	main(int a, char **val)
{
	int		i;
	int		j;
	char	*min;

	i = 1;
	while (i < a)
	{
		j = i + 1;
		while (j < a)
		{
			if (ft_strcmp(val[j], val[i]) < 0)
			{
				min = val[j];
				val[j] = val[i];
				val[i] = min;
			}
			j++;
		}
		ft_putstr(val[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
