/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpajuelo <jpajuelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:30:32 by jpajuelo          #+#    #+#             */
/*   Updated: 2023/10/06 10:12:02 by jpajuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

char	**ft_pot(char **copy, char **argc)
{
	int		i;
	char	**str;
	int		j;
	int		t;

	i = 0;
	t = 1;
	if (i == 0)
	{
		copy[i] = argc[0];
		i++;
	}
	while (argc[i])
	{
		str = ft_split(argc[i], ' ');
		j = 0;
		while (str[j])
		{
			copy[t] = str[j];
			j++;
			t++;
		}
		i++;
	}
	return (copy);
}
