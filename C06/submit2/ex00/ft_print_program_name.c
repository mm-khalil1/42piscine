/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalil <m94khalil@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 10:10:09 by mkhalil           #+#    #+#             */
/*   Updated: 2022/03/27 08:36:27 by mkhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	ac = 0;
	while (*av[ac] != '\0')
	{
		write(1, av[ac], 1);
		++av[ac];
	}
	return (0);
}
