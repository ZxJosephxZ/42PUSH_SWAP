/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpajuelo <jpajuelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:48:23 by joseph            #+#    #+#             */
/*   Updated: 2023/08/22 17:35:33 by jpajuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static int	ft_error(t_list *d, int nb)
{
	nb = 0;
	d->atoierror = 1;
	return (nb);
}

int	ft_atoi(const char *num, t_list *d)
{
	int				i;
	int				sign;
	long long int	nb;

	i = 0;
	sign = 1;
	nb = 0;
	if (num[i] == '-' || num[i] == '+')
	{
		if (num[i] == '-')
			sign *= -1;
		i++;
	}
	while (num[i] <= '9' && num[i] >= '0')
	{
		nb = nb * 10 + num[i] - '0';
		i++;
		if (nb > ((long long int)INT_MAX + 1) && sign == -1)
			return (ft_error(d, nb));
		if (nb > INT_MAX && sign == 1)
		{
			return (ft_error(d, nb));
		}
	}
	return (nb * sign);
}
