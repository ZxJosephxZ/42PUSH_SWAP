/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpajuelo <jpajuelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:56:18 by joseph            #+#    #+#             */
/*   Updated: 2023/08/22 18:35:44 by jpajuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_rrb(t_list *d)
{
	int	i;

	i = d->sib - 1;
	while (i - 1 >= 0)
	{
		ft_swap (&d->sb[i], &d->sb[i - 1]);
		i--;
	}
	write(1, "rrb\n", 4);
}
