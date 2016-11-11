/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdarmaya <vdarmaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 15:53:24 by vdarmaya          #+#    #+#             */
/*   Updated: 2016/11/12 00:37:13 by vdarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*dest;

	dest = (unsigned char*)s;
	while (n--)
	{
		if (*dest == (unsigned char)c)
			return (dest);
		dest++;
	}
	return (NULL);
}
