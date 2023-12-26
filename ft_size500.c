/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size500.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpajuelo <jpajuelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:12:28 by joseph            #+#    #+#             */
/*   Updated: 2023/08/22 18:32:15 by jpajuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_size500(t_list *d)
{
	d->lsp = d->argc - 1;
	d->control = 0;
	d->cont = 7;
	d->percentage = 1;
	d->size_block = (d->argc / d->cont) / 2;
	d->argmax = d->argc;
	ft_ordernum(d);
	ft_changenum(d);
	ft_sortnum(d);
}
