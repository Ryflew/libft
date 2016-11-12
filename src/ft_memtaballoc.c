/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memtaballoc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdarmaya <vdarmaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 16:41:48 by vdarmaya          #+#    #+#             */
/*   Updated: 2016/11/09 17:14:59 by vdarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memtaballoc(size_t tab, size_t size)
{
	char	**out;
	size_t	i;

	i = 0;
	if (!tab || !size)
		return (NULL);
	if (!(out = (char**)malloc(sizeof(char*) * tab)))
		return (NULL);
	while (--tab)
	{
		if (!(out[i] = (char*)malloc(sizeof(char) * size)))
			return (NULL);
		ft_memset(out[i++], 0, size);
	}
	out[i] = NULL;
	return (out);
}
