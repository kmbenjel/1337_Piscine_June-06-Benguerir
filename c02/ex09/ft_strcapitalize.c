/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 04:55:31 by kbenjell          #+#    #+#             */
/*   Updated: 2022/06/27 06:54:08 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i])
	{
		c = str[i];
		if (c < 'A' || c > 'z' || (c > 'Z' && c < 'a'))
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 'z' && str[i] >= 'a')
			str[i] -= 32;
		i++;
	}
	return (str);
}

char	*ft_char_to_str(char c, char *str)
{
	str[0] = c;
	str[1] = '\0';
	return (str);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	tmp[2];
	char	_pre;
	char	_curr;

	_pre = 0;
	_curr = 0;
	tmp[0] = 'A';
	tmp[1] = '\0';
	i = 0;
	while (str[i])
	{
		_curr = str[i];
		if ((i == 0 && ft_str_is_alpha(ft_char_to_str(str[i], tmp))))
			str[i] = ft_strupcase(ft_char_to_str(_curr, tmp))[0];
		else if (_pre >= '0' && _pre <= '9')
			str[i] = ft_strlowcase(ft_char_to_str(_curr, tmp))[0];
		else if (!ft_str_is_alpha(ft_char_to_str(_pre, tmp)))
			str[i] = ft_strupcase(ft_char_to_str(_curr, tmp))[0];
		else
			str[i] = ft_strlowcase(ft_char_to_str(_curr, tmp))[0];
		i++;
		_pre = str[i - 1];
	}
	return (str);
}
