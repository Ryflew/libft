/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdarmaya <vdarmaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 00:40:53 by vdarmaya          #+#    #+#             */
/*   Updated: 2016/11/08 18:31:32 by vdarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*s1;
	char		*s2;
	size_t		i;
	size_t		len;

	if (!dst || !src)
		return (0);
	s1 = dst;
	s2 = (char*)src;
	i = size;
	while (i-- && *s1)
		s1++;
	len = s1 - dst;
	i = size - len;
	if (i == 0)
		return (len + ft_strlen(s2));
	while (*s2)
	{
		if (i-- != 1)
			*s1++ = *s2;
		s2++;
	}
	*s1 = '\0';
	return (len + (s2 - src));
}
