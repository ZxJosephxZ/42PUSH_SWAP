/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpajuelo <jpajuelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 12:41:21 by joseph            #+#    #+#             */
/*   Updated: 2023/10/06 15:44:50 by jpajuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_list
{
	int	*sa;
	int	*sp;
	int	*sb;
	int	sia;
	int	sip;
	int	sib;
	int	control;
	int	percentage;
	int	lsp;
	int	argc;
	int	atoierror;
	int	error;
	int	cont;
	int	size_block;
	int	argmax;
	int	arguments;
}	t_list;
int		ft_strlen(const char *str);
int		ft_check(char *arg);
int		ft_check_same(t_list *d);
int		ft_check_num(char **args, int arc);
int		ft_check_order(t_list *d);
int		ft_atoi(const char *num, t_list *d);
int		ft_get(char *argc);
int		ft_num(int arc, char **argc);
int		ft_parse(char **argc, int arc);

void	ft_swap(int *sa1, int *sa2);
void	ft_ss(t_list *d);
void	ft_sortnum(t_list *d);
void	ft_size500(t_list *d);
void	ft_size100(t_list *d);
void	ft_size5(int *sa, t_list *d);
void	ft_size3(int *sa, t_list *d);
void	ft_sb(int *sb);
void	ft_sa(int *sa);
void	ft_rrr(t_list *d);
void	ft_rrb(t_list *d);
void	ft_rra(t_list *d);
void	ft_rr(t_list *d);
void	ft_rb(t_list *d);
void	ft_ra(t_list *d);
void	ft_pb(t_list *d);
void	ft_pa(t_list *d);
void	ft_ordernum(t_list *d);
void	ft_less_sortnum(t_list *d);
void	ft_free2(t_list *d);
void	ft_free(t_list *d);
void	ft_changenum(t_list *d);
void	ft_clean(char **arr);

size_t	ft_strlcpy(char *str1, const char *str2, size_t n);
char	*ft_strchr(const char *str, int a);
char	*ft_strjoin(char const *s1, char const *s2);

//char	**ft_pot(char **copy, char **argc);
char	**ft_split(char const *s, char c);
char	**ft_copy(int arc, char **argc);

#endif