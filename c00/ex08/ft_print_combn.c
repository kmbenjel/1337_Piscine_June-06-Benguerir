/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 11:52:47 by kbenjell          #+#    #+#             */
/*   Updated: 2022/06/30 19:53:12 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_last(char *current, int n)
{
	if (n == 1)
		if (current[0] == '9')
			return (1);
	while (n > 1)
	{
		if (current[n - 2] != (current[n - 1] - 1) || current[n - 1] != '9')
			return (0);
		n--;
	}
	return (1);
}

char	max_at_i(int n, int i)
{
	return ('9' - (n - 1) + i);
}

void	write_current(char *current, int n)
{
	write(1, current, n);
	write(1, ", ", 2);
}

void	ft_print_combn(int n)
{
	char current[10];
	int i;
	char max;
	char loop;

	i = 0;
	max = '9';
	loop = '0';
	while (i < n)
	{
		current[i] = "0123456789"[i];
		i++;
	}
	while (!check_last(current, n))
	{
		i = n - 1;
		write_current(current, n);
		while (current[i] == max_at_i(n, i) && i >= 0)
		{
			current[i] -= n;
			i--;
		}
		current[i]++;
	}
}
