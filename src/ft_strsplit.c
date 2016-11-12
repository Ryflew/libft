/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdarmaya <vdarmaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 22:51:03 by vdarmaya          #+#    #+#             */
/*   Updated: 2016/11/12 18:56:48 by vdarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static size_t	ft_countwords(const char *str, char c)
{
	short	letters;
	int		i;
	size_t	count;

	i = -1;
	letters = 0;
	count = 1;
	while (str[++i])
	{
		if ((str[i] == c) && (letters == 1))
		{
			count++;
			letters = 0;
		}
		if ((str[i] != c) && (letters != 1))
			letters = 1;
	}
	return (count);
}

static size_t	ft_countletters(const char *str, char c)
{
	int		count;
	int		i;

	i = -1;
	count = 0;
	while ((str[++i] != c) && str[i])
		count++;
	return (count);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		count;
	char	**str;

	i = -1;
	if (!(str = (char**)malloc(sizeof(char*) * (ft_countwords(s, c) + 1))))
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			count = ft_countletters(s, c);
			str[++i] = ft_strsub(s, 0, count);
			if (!str[i])
			{
				ft_strdel(str);
				return (NULL);
			}
			s += count;
		}
		else
			s++;
	}
	str[++i] = NULL;
	return (str);
}
