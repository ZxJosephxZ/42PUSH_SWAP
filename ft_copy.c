/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpajuelo <jpajuelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:30:50 by jpajuelo          #+#    #+#             */
/*   Updated: 2023/12/26 13:41:07 by jpajuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include <stdio.h>

int	parti(char **argc, int arc)
{
	int		i;
	int		cont;

	i = 1;
	cont = 0;
	while (i < arc)
	{
		cont += ft_get(argc[i]);
		i++;
	}
	return (cont);
}

char	**ft_copy(int arc, char **argc)
{
	int		i;
	char	**copy;
	char	**str;
	int		j;
	int		t;

	t = 1;
	i = parti(argc, arc);
	copy = (char **)malloc(sizeof(char *) * i + 2);
	i = 0;
	if (!copy)
		return (0);
	if (i == 0)
		copy[i++] = argc[0];
	while (argc[i])
	{
		str = ft_split(argc[i], ' ');
		j = 0;
		while (str[j])
			copy[t++] = str[j++];
		free(str);
		i++;
	}
	return (copy);
}
