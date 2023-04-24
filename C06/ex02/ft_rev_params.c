/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegirme <mdegirme@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 01:54:00 by mdegirme          #+#    #+#             */
/*   Updated: 2023/04/13 01:55:14 by mdegirme         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	while (ac > 1)
	{
		ft_putstr(av[ac - 1]);
		ac--;
	}
	return (0);
}
