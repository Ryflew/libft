/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdarmaya <vdarmaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 00:25:44 by vdarmaya          #+#    #+#             */
/*   Updated: 2016/11/08 18:17:08 by vdarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_bis;
	unsigned char	*src_bis;

	dest_bis = dest;
	src_bis = (void*)src;
	if (!dest_bis || !src_bis)
		return (NULL);
	while (n--)
		*dest_bis++ = *src_bis++;
	return (dest);
}
