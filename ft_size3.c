/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpajuelo <jpajuelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:09:11 by joseph            #+#    #+#             */
/*   Updated: 2023/08/22 18:34:50 by jpajuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_size3(int *sa, t_list *d)
{
	if (d->argc == 2)
	{
		if (sa[0] > sa[1])
			ft_sa(sa);
	}
	else if (sa[0] < sa[1] && sa[0] < sa[2] && sa[1] < sa[2])
	{
	}
	else if (sa[0] < sa[1] && sa[0] < sa[2] && sa[1] > sa[2])
	{
		ft_rra(d);
		ft_sa(sa);
	}
	else if (sa[0] > sa[1] && sa[0] < sa[2] && sa[1] < sa[2])
		ft_sa(sa);
	else if (sa[0] < sa[1] && sa[0] > sa[2] && sa[1] > sa[2])
		ft_rra(d);
	else if (sa[1] < sa[2] && sa[0] > sa[1] && sa[0] > sa[2])
		ft_ra(d);
	else if (sa[1] > sa[2] && sa[0] > sa[1] && sa[0] > sa[2])
	{
		ft_ra(d);
		ft_sa(sa);
	}
}
