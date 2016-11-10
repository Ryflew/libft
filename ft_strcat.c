/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdarmaya <vdarmaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 23:55:12 by vdarmaya          #+#    #+#             */
/*   Updated: 2016/11/10 19:25:32 by vdarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, const char *src)
{
	char	*s1;
	char	*s2;

	s1 = dest;
	s2 = (char*)src;
	if (!s1 || !s2)
		return ((void*)0);
	while (*s1)
		s1++;
	while (*s2)
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	if (*s2 == '\0')
		*s1 = '\0';
	return (dest);
}
