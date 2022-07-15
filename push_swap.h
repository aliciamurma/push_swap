/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurcia- <amurcia-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:14:53 by amurcia-          #+#    #+#             */
/*   Updated: 2022/07/11 11:36:59 by amurcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct s_list
{
	int				data;
	int				index;
	struct s_list	*next;
}	t_list;

//UTILS
int			ft_atoi(char *str);
long int	ft_atoi_plus(char *str);
void		ft_putstr(char *s);
void		ft_putchar(char c);
char		*ft_itoa(int n);
int			ft_strncmp(char *s1, char *s2);
size_t		ft_strlen(char *str);

//ERRORES
void		ft_errors_numbers(int argc, char **argv);
void		ft_putstr_error(char *s);
void		ft_errors_repeat(char **argv);
void		ft_int_max_value(char **argv);

//ALGORITMO
int			main(int argc, char **argv);
t_list		*ft_create_list(int argc, char **argv);
int			ft_min(t_list *list);
int			ft_max(t_list *list);
void		ft_three_num(t_list **list);

//MOVIMIENTOS EN LOS STACKS
t_list	*ft_sa(t_list **list);

#endif
