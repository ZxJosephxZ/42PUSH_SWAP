/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpajuelo <jpajuelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:48:28 by joseph            #+#    #+#             */
/*   Updated: 2023/08/22 18:36:25 by jpajuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_rr(t_list *d)
{
	int	i;

	i = 0;
	while (i + 1 < d->sia)
	{
		ft_swap(&d->sa[i], &d->sa[i + 1]);
		i++;
	}
	i = 0;
	while (i + 1 < d->sib)
	{
		ft_swap(&d->sb[i], &d->sb[i + 1]);
		i++;
	}
	write(1, "rr\n", 3);
}