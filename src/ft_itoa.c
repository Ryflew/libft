/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdarmaya <vdarmaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 16:52:17 by vdarmaya          #+#    #+#             */
/*   Updated: 2016/11/12 18:57:53 by vdarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

static void	ft_strconv(char *str, int size, int nbr)
{
	int		i;

	i = -1;
	str[size] = '\0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 9)
	{
		str[--size] = (char)((nbr % 10) + 48);
		nbr /= 10;
	}
	str[--size] = (char)(nbr + 48);
}

char		*ft_itoa(int n)
{
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
	if (!(str = (char*)malloc(sizeof(*str) * (size + 1))))
		return (NULL);
	ft_strconv(str, size, n);
	return (str);
}
