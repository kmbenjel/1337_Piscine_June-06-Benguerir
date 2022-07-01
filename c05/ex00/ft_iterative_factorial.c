/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 14:13:21 by kbenjell          #+#    #+#             */
/*   Updated: 2022/06/28 00:51:58 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	i = 1;
	result = 1;
	if (nb == 0)
		return (result);
	else if (nb < 0)
		return (0);
	else
	{
		while (i <= nb)
		{
			result *= i;
			i++;
		}
		return (result);
	}
}
