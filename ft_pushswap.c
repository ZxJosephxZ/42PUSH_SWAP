/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushswap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpajuelo <jpajuelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:30:24 by jpajuelo          #+#    #+#             */
/*   Updated: 2023/10/06 15:48:53 by jpajuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static int	init(t_list *d);
static int	init_args(t_list *d, char **args, int arc);
static int	choose(int arc, t_list *d);

int	ft_parche(t_list *d, char **arr, int t)
{
	d->error = 0;
	d->argc = t - 1;
	if (init(d) == -1)
		ft_free(d);
	if (init_args(d, arr, t) == -1)
	{
		ft_free(d);
		return (0);
	}
	if (ft_check_order(d) == -1)
		ft_free2(d);
	if (choose(t, d) == -1)
		ft_free(d);
	ft_free2(d);
	return (0);
}

int	main(int arc, char **args)
{
	t_list	*d;
	int		t;
	char	**arr;

	if (arc < 1)
	{
		return (0);
	}
	d = malloc(sizeof(t_list));
	if (!d)
		return (0);
	if (ft_parse(args, arc) == -1)
		ft_free(d);
	t = ft_num(arc, args);
	arr = ft_copy(arc, args);
	if (arr == NULL)
	{
		ft_free2(d);
		ft_free(d);
		return (0);
	}
	if (ft_check_num(arr, t - 1) == -1)
		ft_free(d);
	return (ft_parche(d, arr, t));
}

static int	choose(int arc, t_list *d)
{
	if (ft_check_same(d) == -1)
	{
		return (-1);
	}
	else
	{
		if (arc == 4 || arc == 3)
		{
			ft_size3(d->sa, d);
		}
		if (arc > 4 && arc < 7)
		{
			ft_size5(d->sa, d);
		}
		if (arc < 102 && arc > 6)
		{
			ft_size100(d);
		}
		if (arc > 101)
		{
			ft_size500(d);
		}
	}
	return (0);
}

static int	init(t_list *d)
{
	d->sa = malloc(sizeof(int) * d->argc);
	if (!d->sa)
	{
		free(d);
		return (-1);
	}
	d->sp = malloc(sizeof(int) * d->argc);
	if (!d->sp)
	{
		free(d->sa);
		free(d);
		return (-1);
	}
	d->sb = malloc(sizeof(int) * d->argc);
	if (!d->sb)
	{
		free(d->sp);
		free(d->sa);
		free(d);
		return (-1);
	}
	d->sia = d->argc;
	d->sib = 0;
	d->sip = d->argc;
	return (0);
}

static int	init_args(t_list *d, char **args, int arc)
{
	int	i;

	i = 0;
	while (i != arc - 1)
	{
		if (ft_check(args[i + 1]) == -1)
		{
			return (-1);
		}
		d->sa[i] = ft_atoi(args[i + 1], d);
		if (d->atoierror == 1)
		{
			return (-1);
		}
		d->sp[i] = ft_atoi(args[i + 1], d);
		i++;
	}
	return (0);
}
