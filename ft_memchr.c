/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdarmaya <vdarmaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 15:53:24 by vdarmaya          #+#    #+#             */
/*   Updated: 2016/11/08 18:13:42 by vdarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*dest;
	size_t			i;

	dest = (void*)s;
	if (!dest)
		return (NULL);
	i = -1;
	while (*dest && (*dest != (unsigned char)c) && (++i < n))
		dest++;
	if (*dest == (unsigned char)c)
		return (dest);
	return (NULL);
}
