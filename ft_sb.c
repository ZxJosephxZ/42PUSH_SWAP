/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpajuelo <jpajuelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 15:12:26 by joseph            #+#    #+#             */
/*   Updated: 2023/08/22 18:22:20 by jpajuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_sb(int *sb)
{
	int	temp;

	temp = sb[0];
	sb[0] = sb[1];
	sb[1] = temp;
	write(1, "sb\n", 3);
}