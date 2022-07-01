/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 12:36:12 by kbenjell          #+#    #+#             */
/*   Updated: 2022/07/01 07:24:07 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	l;
	long	r;
	int		mid;
	long	ans;

	l = 0;
	r = nb;
	if (nb == 0 || nb == 1)
		return (nb);
	while (l <= r)
	{
		mid = (l + r) / 2;
		if (mid * mid == nb)
			return ((int)mid);
		if (mid * mid <= nb)
		{
			l = mid + 1;
			ans = mid;
		}
		else
			r = mid - 1;
	}
	if (ans * ans == nb)
		return ((int)ans);
	return (0);
}
