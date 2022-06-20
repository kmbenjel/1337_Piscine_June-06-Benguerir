/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 08:24:16 by kbenjell          #+#    #+#             */
/*   Updated: 2022/06/14 09:17:05 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putthree(int n)
{
	ft_putchar(n / 100 + '0');
	ft_putchar((n / 10) % 10 + '0');
	ft_putchar(n % 10 + '0');
	if (n < 789)
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;
	int	n;

	n = 12;
	while (n <= 789)
	{
		a = n / 100;
		b = (n / 10) % 10;
		c = n % 10;
		if (a < b && b < c)
			ft_putthree(n);
		n++;
	}
}
