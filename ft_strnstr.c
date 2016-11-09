/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdarmaya <vdarmaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 20:33:09 by vdarmaya          #+#    #+#             */
/*   Updated: 2016/11/08 19:04:44 by vdarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		count;
	size_t		s1;
	size_t		s2;

	if (!big || !little)
		return (NULL);
	count = -1;
	i = 0;
	s1 = ft_strlen((char*)big);
	s2 = ft_strlen((char*)little) - 1;
	if (!*little || (big == little))
		return ((char*)big);
	while (*big && (s1-- >= s2) && len--)
	{
		while ((++count <= s2) && (big[count] == little[count]) && (i++ != len))
		{
			if (count == s2)
				return ((char*)big);
		}
		i -= count + 1;
		count = -1;
		big++;
	}
	return (NULL);
}
