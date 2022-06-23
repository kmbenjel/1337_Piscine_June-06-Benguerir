/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 04:30:04 by kbenjell          #+#    #+#             */
/*   Updated: 2022/06/22 04:30:06 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return (s2[i] - s1[i]);
		i++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c])
		c++;
	return (c);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	char			*found;

	i = 0;
	found = str;
	if (ft_strlen(to_find) == 0)
		return (found);
	while (str[i])
	{
		if (str[i] == to_find[0])
			if (ft_strncmp(found, to_find, ft_strlen(to_find)) == 0)
				return (found);
		i++;
		found++;
	}
	return (0);
}
