/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdarmaya <vdarmaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 00:54:28 by vdarmaya          #+#    #+#             */
/*   Updated: 2016/11/12 18:55:43 by vdarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		start;
	int		len;

	i = 0;
	while (s[i] && ((s[i] == ' ') || (s[i] == '\t') || (s[i] == '\n')))
		i++;
	if (!s[i])
		return (ft_strdup(""));
	start = i;
	while (s[i])
		i++;
	len = i - start;
	while ((s[--i] == ' ') || (s[i] == '\t') || (s[i] == '\n'))
		--len;
	return (ft_strsub(s, start, len));
}
