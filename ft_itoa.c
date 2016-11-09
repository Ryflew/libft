/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdarmaya <vdarmaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 16:52:17 by vdarmaya          #+#    #+#             */
/*   Updated: 2016/11/08 18:08:36 by vdarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_strconv(char *str, int nbr)
{
	int		i;

	i = -1;
	if (nbr < 0)
	{
		str[++i] = '-';
		nbr = -nbr;
	}
	while (nbr > 9)
	{
		str[++i] = (char)((nbr % 10) + 48);
		nbr /= 10;
	}
	str[++i] = (char)(nbr + 48);
	str[++i] = '\0';
}

void	ft_strrev(char *dest, char *src)
{
	int		len;
	int		count;
	int		i;

	i = -1;
	len = ft_strlen(src);
	count = len;
	if (src[0] == '-')
	{
		dest[++i] = '-';
		count--;
	}
	while (count--)
		dest[++i] = src[--len];
	dest[++i] = '\0';
}

char	*ft_itoa(int n)
{
	char	*tmp;
	char	*str;
	int		count;
	int		size;

	count = n;
	size = 1;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
		size++;
	while ((count > 9) || (count < -9))
	{
		count = (int)(count / 10);
		size++;
	}
	tmp = (char*)malloc(sizeof(*tmp) * (size + 1));
	str = (char*)malloc(sizeof(*tmp) * (size + 1));
	if (!tmp || !str)
		return (NULL);
	ft_strconv(tmp, n);
	ft_strrev(str, tmp);
	free(tmp);
	return (str);
}
