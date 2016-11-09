/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdarmaya <vdarmaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 00:29:55 by vdarmaya          #+#    #+#             */
/*   Updated: 2016/11/08 18:32:55 by vdarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	i;
	char	*s1;
	char	*s2;

	i = 0;
	s1 = dest;
	s2 = (char*)src;
	if (!dest || !src)
		return (NULL);
	while (*s1 != '\0')
		s1++;
	while (*s2 != '\0' && (i++ < n))
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	if (*s2 == '\0')
		*s1 = '\0';
	return (dest);
}
