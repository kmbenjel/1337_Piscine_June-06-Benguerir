/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 11:17:52 by kbenjell          #+#    #+#             */
/*   Updated: 2022/06/23 14:10:13 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isspace(char c)
{
	char	*str;

	str = "\t\n\v\f\r ";
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

int	ft_char_is_numeric(char c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	nb;

	sign = 1;
	nb = 0;
	while (ft_isspace(*str))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (ft_char_is_numeric(*str))
	{
		nb *= 10;
		nb += *str - 48;
		str++;
	}
	return (sign * nb);
}
