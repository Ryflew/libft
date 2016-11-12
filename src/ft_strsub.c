/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdarmaya <vdarmaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 22:12:27 by vdarmaya          #+#    #+#             */
/*   Updated: 2016/11/12 19:04:08 by vdarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*str;
	int		size;

	i = -1;
	size = ft_strlen((char*)s);
	if (!s || ((size - start) < len))
		return (NULL);
	if (!(str = (char*)malloc(sizeof(*str) * (len + 1))))
		return (NULL);
	while (start--)
		s++;
	while (len--)
	{
		str[++i] = *s;
		s++;
	}
	str[++i] = '\0';
	return (str);
}
