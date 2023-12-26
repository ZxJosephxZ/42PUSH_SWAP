/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpajuelo <jpajuelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 01:21:18 by joseph            #+#    #+#             */
/*   Updated: 2023/08/22 18:20:50 by jpajuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_rb(t_list *d)
{
	int	i;

	i = 0;
	while (i + 1 < d->sib)
	{
		ft_swap(&d->sb[i], &d->sb[i + 1]);
		i++;
	}
	write(1, "rb\n", 3);
}