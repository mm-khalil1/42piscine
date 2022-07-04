/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalil <m94khalil@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 14:53:53 by mkhalil           #+#    #+#             */
/*   Updated: 2022/03/21 14:55:05 by mkhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_size;

	dest_size = 0;
	i = -1;
	while (dest[++i] != '\0')
		dest_size++;
	i = -1;
	while (src[++i] != '\0')
		dest[i + dest_size] = src[i];
	dest[i + dest_size] = '\0';
	return (dest);
}
