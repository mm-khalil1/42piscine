/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalil <m94khalil@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 14:52:39 by mkhalil           #+#    #+#             */
/*   Updated: 2022/03/21 14:52:53 by mkhalil          ###   ########.fr       */
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
