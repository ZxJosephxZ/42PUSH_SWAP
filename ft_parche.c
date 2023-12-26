/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parche.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpajuelo <jpajuelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:30:56 by jpajuelo          #+#    #+#             */
/*   Updated: 2023/10/06 14:48:08 by jpajuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	ft_get(char *argc)
{
	int		i;
	char	**str;

	i = 0;
	str = ft_split(argc, ' ');
	while (str[i])
	{
		i++;
	}
	ft_clean(str);
	free(str);
	return (i);
}
