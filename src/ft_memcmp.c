/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdarmaya <vdarmaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 16:12:24 by vdarmaya          #+#    #+#             */
/*   Updated: 2016/11/12 00:37:23 by vdarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *str1;
	unsigned char *str2;

	str1 = (void*)s1;
	str2 = (void*)s2;
	while (n && (*str1 == *str2))
	{
		str1++;
		str2++;
		n--;
	}
	if (!n)
		return (0);
	return (*str1 - *str2);
}
