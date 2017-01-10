/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdarmaya <vdarmaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/08 23:49:18 by vdarmaya          #+#    #+#             */
/*   Updated: 2017/01/09 02:27:56 by vdarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list	*next;
	t_list	*tmp;

	if (!alst || !del)
		return ;
	next = *alst;
	while (next)
	{
		tmp = next->next;
		del(next->content, next->content_size);
		free(next);
		next = tmp;
	}
	*alst = NULL;
}
