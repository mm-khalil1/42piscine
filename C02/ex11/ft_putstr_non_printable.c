/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalil <m94khalil@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 15:00:11 by mkhalil           #+#    #+#             */
/*   Updated: 2022/03/22 18:23:00 by mkhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	hex_rem;

	while (*str != '\0')
	{
		if (*str > 0 && *str <= 31)
		{
			print('\\');
			print(*str / 16 + '0');
			hex_rem = *str % 16;
			if (hex_rem > 9)
				print(hex_rem - 10 + 'a');
			else
				print(hex_rem + '0');
		}
		else
			print(*str);
		str = str + 1;
	}
}
