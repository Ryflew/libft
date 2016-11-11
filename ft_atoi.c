/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdarmaya <vdarmaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 21:10:12 by vdarmaya          #+#    #+#             */
/*   Updated: 2016/11/12 00:40:40 by vdarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *nptr)
{
	long	result;
	int		nega;

	nega = 1;
	result = 0;
	while ((*nptr == '\t') || (*nptr == '\n') || (*nptr == '\r')
		|| (*nptr == '\v') || (*nptr == '\b') || (*nptr == '\f')
		|| (*nptr == '\a') || (*nptr == ' '))
		nptr++;
	if ((*nptr == '-') || (*nptr == '+'))
	{
		if (*nptr == '-')
			nega = -1;
		nptr++;
	}
	while ((*nptr >= '0') && (*nptr <= '9'))
	{
		result = (result * 10) + (int)(*nptr - 48);
		nptr++;
	}
	return (result * nega);
}
