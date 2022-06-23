/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 06:59:57 by kbenjell          #+#    #+#             */
/*   Updated: 2022/06/23 06:00:59 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c])
	{
		c++;
	}
	return (c);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dstlen;

	dstlen = ft_strlen(dest);
	if (size <= dstlen)
		return (ft_strlen(src) + size);
	i = 0;
	j = 0;
	while (dest[i])
		i++;
	size -= i;
	while (src[j] && size != 1)
	{
		dest[i] = src[j];
		i++;
		j++;
		size--;
	}
	dest[i] = '\0';
	return (dstlen + ft_strlen(src));
}
