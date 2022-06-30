/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 11:52:47 by kbenjell          #+#    #+#             */
/*   Updated: 2022/06/30 22:15:19 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	not_last(char *current, int n)
{
	int	i;

	i = n - 1;
	if (n == 1)
	{
		if (current[i] == '9')
			return (0);
		else
			return (1);
	}
	while (i > 0)
	{
		if (current[i - 1] != (current[i] - 1) || current[n - 1] != '9')
			return (1);
		i--;
	}
	return (0);
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
	char	current[10];
	int		i;

	i = 0;
	while (i < n)
	{
		current[i] = "0123456789"[i];
		i++;
	}
	while (not_last(current, n))
	{
		i = n - 1;
		write_current(current, n);
		while (current[i] == max_at_i(n, i) && i >= 0)
			i--;
		current[i]++;
		while (i++ <= n - 1)
			current[i] = current[i - 1] + 1;
	}
	write(1, current, n);
}
