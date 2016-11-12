/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddmid.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdarmaya <vdarmaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 18:32:11 by vdarmaya          #+#    #+#             */
/*   Updated: 2016/11/09 19:20:50 by vdarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstaddmid(t_list **alst, t_list *previous, t_list *new)
{
	t_list	*tmp;
	t_list	*tmp2;

	if (!alst || !previous || !new)
		return ;
	tmp = *alst;
	while (tmp && (tmp != previous))
		tmp = tmp->next;
	if (tmp == previous)
	{
		tmp2 = tmp->next;
		tmp->next = new;
		new->next = tmp2;
	}
}
