/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_same.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpajuelo <jpajuelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 14:54:29 by joseph            #+#    #+#             */
/*   Updated: 2023/08/22 17:38:57 by jpajuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static int	checkequal(t_list *d, int sa, int j)
{
	int	i;

	i = 0;
	while (i < j)
	{
		if (d->sa[i] == sa)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_check_same(t_list *d)
{
	int	i;

	i = 0;
	while (i <= d->sia - 1)
	{
		if (checkequal (d, d->sa[i], i) == 1)
		{
			i++;
		}
		else
		{
			return (-1);
		}
	}
	return (0);
}
