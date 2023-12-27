/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpajuelo <jpajuelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:43:55 by jpajuelo          #+#    #+#             */
/*   Updated: 2023/12/27 09:09:11 by jpajuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static int	track(char *argc)
{
	int	i;

	i = 0;
	while (argc[i])
	{
		if (argc[i] != ' ')
			return (1);
		i++;
	}
	return (0);
}

int	ft_parse(char **argc, int arc)
{
	int	i;

	i = 0;
	while (i < arc)
	{
		if (argc[i][0] == '\0' || !track(argc[i]))
		{
			return (-1);
		}
		i++;
	}
	return (0);
}
