# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpajuelo <jpajuelo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/17 18:38:10 by joseph            #+#    #+#              #
#    Updated: 2023/12/26 13:23:08 by jpajuelo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC =   ft_pushswap.c ft_swap.c ft_ss.c ft_sortnum.c ft_size500.c \
		ft_size100.c ft_size5.c ft_size3.c ft_sb.c ft_sa.c ft_rrr.c \
		ft_rrb.c ft_rra.c ft_rr.c ft_rb.c ft_ra.c ft_pa.c ft_pb.c \
		ft_ordernum.c ft_less_sortnum.c ft_free2.c ft_free.c ft_check.c \
		ft_check_same.c ft_check_num.c ft_changenum.c ft_atoi.c ft_strlen.c ft_clean.c\
		ft_check_order.c ft_split.c ft_strjoin.c ft_strchr.c ft_strlcpy.c ft_parche.c ft_copy.c ft_num.c ft_parse.c\
		ft_put.c

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

%.o: %.c
		@$(CC) $(CFLAGS) -c $< -o $@

OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
		 @$(CC) $(SRC) -o $(NAME)

clean:				
		@$(RM) $(OBJS)

fclean:	clean
		@$(RM) $(NAME)

re:		fclean all