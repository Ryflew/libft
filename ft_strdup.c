/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdarmaya <vdarmaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 19:41:06 by vdarmaya          #+#    #+#             */
/*   Updated: 2016/11/12 00:37:51 by vdarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*out;
	int		i;

	i = 0;
	while (src[i])
		i++;
	out = (char*)malloc(sizeof(*out) * (i + 1));
	if (!out)
		return (NULL);
	i = -1;
	while (src[++i])
		out[i] = src[i];
	out[i] = '\0';
	return (out);
}
