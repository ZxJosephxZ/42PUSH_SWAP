/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_changenum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpajuelo <jpajuelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:37:28 by joseph            #+#    #+#             */
/*   Updated: 2023/08/22 17:36:21 by jpajuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_changenum(t_list *d)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < d->argc)
	{
		if (d->sa[j] != d->sp[i])
		{
			i++;
		}
		else
		{
			d->sa[j] = i;
			j++;
			i = 0;
		}
	}
}
