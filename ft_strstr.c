/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdarmaya <vdarmaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 02:44:40 by vdarmaya          #+#    #+#             */
/*   Updated: 2016/11/12 00:39:57 by vdarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int		count;
	int		big_len;
	int		little_len;

	count = -1;
	big_len = ft_strlen((char*)big);
	little_len = ft_strlen((char*)little) - 1;
	if (!*little)
		return ((char*)big);
	while (*big && (big_len-- >= little_len))
	{
		while ((++count <= little_len) && (big[count] == little[count]))
		{
			if (count == little_len)
				return ((char*)big);
		}
		count = -1;
		big++;
	}
	return (NULL);
}
