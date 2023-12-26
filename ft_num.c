/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpajuelo <jpajuelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:30:44 by jpajuelo          #+#    #+#             */
/*   Updated: 2023/10/04 14:30:46 by jpajuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	ft_num(int arc, char **argc)
{
	int	i;
	int	cont;

	cont = 0;
	i = 0;
	while (i < arc)
	{
		cont += ft_get(argc[i]);
		i++;
	}
	return (cont);
}
