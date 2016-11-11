/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdarmaya <vdarmaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 00:40:53 by vdarmaya          #+#    #+#             */
/*   Updated: 2016/11/12 00:38:50 by vdarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	destlen;

	i = 0;
	while (dest[i] && i < n)
		i++;
	destlen = i;
	while (src[i - destlen] && i < n - 1)
	{
		dest[i] = src[i - destlen];
		i++;
	}
	if (destlen < n)
		dest[i] = '\0';
	return (destlen + ft_strlen((char*)src));
}
