/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdarmaya <vdarmaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 00:40:53 by vdarmaya          #+#    #+#             */
/*   Updated: 2016/11/10 18:53:59 by vdarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *source, size_t size1)
{
	char		*strdest;
	const char	*src;
	size_t		n;
	size_t		len;

	strdest = dest;
	src = source;
	n = size1;
	while ((n-- != 0) && *strdest)
		strdest++;
	len = strdest - dest;
	n = size1 - len;
	if (n == 0)
		return (len + ft_strlen((char*)src));
	while (*src)
	{
		if (n != 1)
		{
			*strdest++ = *src;
			n--;
		}
		src++;
	}
	*strdest = '\0';
	return (len + (src - source));
}
