/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 13:48:01 by kbenjell          #+#    #+#             */
/*   Updated: 2022/07/01 06:07:02 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_char_is_non_printable(char c)
{
	if (c >= 0)
	{
		if (c < 32 || c == 127)
			return (1);
		else
			return (0);
	}
	else
		return (1);
}

char	ft_hex(int n)
{
	return ("0123456789abcdef"[n]);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	temp;

	i = 0;
	while (str[i])
	{
		if (ft_char_is_non_printable(str[i]))
		{
			write(1, "\\", 1);
			temp = ft_hex((unsigned char)str[i] / 16);
			write(1, &temp, 1);
			temp = ft_hex((unsigned char)str[i] % 16);
			write(1, &temp, 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
