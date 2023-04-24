/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegirme <mdegirme@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 17:36:28 by mdegirme          #+#    #+#             */
/*   Updated: 2023/03/26 17:36:29 by mdegirme         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	li;
	int	col;

	li = 0;
	while (++li <= y && (x > 0 && y > 0))
	{
		col = 0;
		while (++col <= x)
		{
			if (li == 1 || li == y)
			{
				if (col == 1)
					ft_putchar('A');
				else if (col == x)
					ft_putchar('C');
				else
					ft_putchar('B');
			}
			else if (col == 1 || col == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
