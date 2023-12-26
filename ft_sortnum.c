/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sortnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpajuelo <jpajuelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 17:36:08 by joseph            #+#    #+#             */
/*   Updated: 2023/10/04 11:12:43 by jpajuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static void	sortnum_sb3(t_list *d)
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
		if (d->control == 2)
		{
			d->lsp = d->lsp - 2;
			d->control = 0;
			ft_sa(d->sa);
			ft_rra(d);
		}
	}
	else
		ft_rb(d);
}

static int	check_mov(t_list *d)
{
	int	i;

	i = 0;
	while (i <= d->sib - 1)
	{
		if (d->sb[i] == d->lsp)
		{
			break ;
		}
		i++;
	}
	if ((d->sib / 2) - i >= 0)
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}

static void	sortnum_sb_rotate(t_list *d)
{
	if (d->sb[0] == d->lsp -2 && d->control == 1)
	{
		ft_pa(d);
		ft_ra(d);
		d->control = 2;
	}
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
		ft_rrb(d);
}

static void	sortnum_sb(t_list *d)
{
	while (d->sia < d->argc)
	{
		if (d->sb[0] == d->lsp && d->control == 0)
		{
			ft_pa(d);
			d->lsp--;
		}
		if (d->sb[0] == d->lsp -2 && d->control == 1)
		{
			ft_pa(d);
			ft_ra(d);
			d->control = 2;
		}
		if (check_mov(d) == -1)
		{
			sortnum_sb_rotate(d);
		}
		else
		{
			sortnum_sb3(d);
		}
	}
}

void	ft_sortnum(t_list *d)
{
	d->arguments = (d->argc / d->cont) * (d->percentage);
	if (d->percentage == d->cont)
		d->arguments = d->argmax - 3;
	while (d->sib < d->arguments && d->percentage <= d->cont)
	{
		if (d->sa[0] < d->arguments)
		{
			ft_pb(d);
			if (d->sb[0] > d->arguments - d->size_block && d->sib > 1)
				ft_rb(d);
		}
		else
			ft_ra(d);
	}
	d->percentage++;
	if (d->sib == d->argmax - 3)
	{
		ft_size3(d->sa, d);
		d->lsp = d->lsp - 3;
	}
	if (d->percentage <= d->cont)
		ft_sortnum(d);
	while (d->percentage-- > 0)
		sortnum_sb(d);
}
