/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegirme <mdegirme@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 17:13:32 by mdegirme          #+#    #+#             */
/*   Updated: 2023/04/09 18:21:42 by mdegirme         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	else
	{
		while (*str)
		{
			if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
				str++;
			else
				return (0);
		}
	}
	return (1);
}
