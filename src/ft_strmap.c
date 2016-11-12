/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdarmaya <vdarmaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 01:36:17 by vdarmaya          #+#    #+#             */
/*   Updated: 2016/11/12 18:54:25 by vdarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	int		len;
	int		i;

	i = -1;
	len = ft_strlen((char*)s);
	if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (*s)
	{
		str[++i] = f(*s);
		s++;
	}
	str[++i] = '\0';
	return (str);
}
