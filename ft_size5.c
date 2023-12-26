/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size5.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpajuelo <jpajuelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:10:19 by joseph            #+#    #+#             */
/*   Updated: 2023/10/04 16:11:24 by jpajuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static	void	size4(int *sa, t_list *d)
{
	if (d->sia == 4)
	{
		if (sa[0] < sa[1] && sa[0] < sa[2] && sa[0] < sa[3] && d->sia == 4)
			ft_pb(d);
		if (sa[0] > sa[1] && sa[1] < sa[2] && sa[1] < sa[3] && d->sia == 4)
		{
			ft_sa(d->sa);
			ft_pb(d);
		}
		if (sa[0] > sa[2] && sa[1] > sa[2] && sa[2] < sa[3] && d->sia == 4)
		{
			ft_ra(d);
			ft_sa(d->sa);
			ft_pb(d);
		}
		if (sa[0] > sa[3] && sa[1] > sa[3] && sa[2] > sa[3] && d->sia == 4)
		{
			ft_rra(d);
			ft_pb(d);
		}
	}
	if (d->sia == 3)
		ft_size3(d->sa, d);
	ft_pa(d);
}

static int	size5_2(int *sa, t_list *d, int i)
{
	if (sa[0] > sa[2] && sa[1] > sa[2]
		&& sa[2] < sa[3] && sa[2] < sa[4] && i == 0)
	{
		ft_ra(d);
		ft_sa(d->sa);
		ft_pb(d);
		i++;
	}
	if (sa[0] > sa[3] && sa[1] > sa[3]
		&& sa[2] > sa[3] && sa[3] < sa[4] && i == 0)
	{
		ft_rra(d);
		ft_rra(d);
		ft_pb(d);
		i++;
	}
	if (sa[0] > sa[4] && sa[1] > sa[4] && \
	sa[2] > sa[4] && sa[3] > sa[4] && i == 0)
	{
		ft_rra(d);
		ft_pb(d);
		i++;
	}
	return (i);
}

void	ft_cont(int i, t_list *d, int *sa)
{
	if (i == 1)
	{
		ft_pa(d);
		if (sa[0] > sa[1])
			ft_sa(d->sa);
	}
}

void	ft_size5(int *sa, t_list *d)
{
	int	i;

	i = 0;
	if (d->sia == 5)
	{
		if (sa[0] < sa[1] && sa[0] < sa[2] && sa[0] < sa[3]
			&& sa[0] < sa[4] && i == 0)
		{
			ft_pb(d);
			i++;
		}
		if (sa[0] > sa[1] && sa[1] < sa[2] && sa[1] < sa[3]
			&& sa[1] < sa[4] && i == 0)
		{
			ft_sa(d->sa);
			ft_pb(d);
			i++;
		}
		i = size5_2(d->sa, d, i);
	}
	size4(d->sa, d);
	ft_cont(i, d, sa);
}
