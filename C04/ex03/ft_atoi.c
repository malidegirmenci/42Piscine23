/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegirme <mdegirme@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 18:47:21 by mdegirme          #+#    #+#             */
/*   Updated: 2023/04/12 18:50:36 by mdegirme         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	c;
	int	s;
	int	res;

	c = 0;
	s = 1;
	res = 0;
	while ((str[c] >= 9 && str[c] <= 13) || str[c] == 32)
		c++;
	while (str[c] == 43 || str[c] == 45)
	{
		if (str[c] == 45)
			s *= -1;
		c++;
	}
	while (str[c] >= 48 && str[c] <= 57)
	{
		res = (res * 10) + (str[c] - 48);
		c++;
	}
	return (res * s);
}
