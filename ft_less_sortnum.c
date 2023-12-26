/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_less_sortnum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpajuelo <jpajuelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 17:14:36 by joseph            #+#    #+#             */
/*   Updated: 2023/08/22 17:42:27 by jpajuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static void	less_sortnum_sb(t_list *d)
{
	while (d->sib > 0)
	{
		if (d->sb[0] == d->lsp - 1)
		{
			ft_pa(d);
			d->control = 1;
		}
		if (d->sb[0] == d->lsp)
		{
			ft_pa(d);
			d->lsp--;
			if (d->control == 1)
			{
				d->lsp--;
				d->control = 0;
				ft_sa(d->sa);
			}
		}
		else
		{
			ft_rb(d);
		}
	}
}

static void	less_sortnum_sb2(t_list *d, int i)
{
	while (i >= 0)
	{
		if (d->sa[0] == i)
		{
			ft_pb(d);
			i--;
		}
		else
		{
			ft_ra(d);
		}
	}
	less_sortnum_sb(d);
}

void	ft_less_sortnum(t_list *d)
{
	int	i;

	i = d->lsp;
	while (d->sib <= (d->argc / 2))
	{
		if (d->sa[0] == i)
		{
			ft_pb(d);
			i--;
		}
		else
		{
			ft_ra(d);
		}
	}
	less_sortnum_sb(d);
	less_sortnum_sb2(d, i);
}
