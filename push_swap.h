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
# include <stdio.h>

typedef struct s_stack
{
	int					data;
	int					index;
	struct s_stack		*next;
}	t_stack;

typedef struct s_list
{
	int				average_a;
	int				average_b;
	int				median_a;
	int				median_b;
	int				len_a;
	int				len_b;
	int				max_a;
	int				min_a;
	int				max_b;
	int				min_b;
	t_stack 		*stack_a;
	t_stack 		*stack_b;
	t_stack			*last;
	t_stack			*first;
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
t_stack		*ft_create_stack_a(int argc, char **argv);
int			ft_min_five(t_stack *stack_a);
int			ft_max_five(t_stack *stack_a);
void		ft_two_num(t_stack **stack_a, t_stack **stack_b);
void		ft_three_num(t_stack **stack_a, t_stack **stack_b);
void		ft_four_num(t_stack **stack_a, t_stack **stack_b);
void		ft_five_num(t_stack **stack_a, t_stack **stack_b);
void		ft_more_num_a(t_list *list);
void		ft_continue_more_a(t_list *list);
void		ft_continue_more_more_a(t_list *list);
void		ft_more_num_b(t_list *list);
void		ft_continue_more_b(t_list *list);
void		ft_continue_more_more_b(t_list *list);
void		ft_quick_sort(t_list *list);

//MAS DE CINCO NUMEROS
void		ft_max_a(t_list *list);
void		ft_min_a(t_list *list);
void		ft_max_b(t_list *list);
void		ft_min_b(t_list *list);
void		ft_min_max(t_list *list);
void		ft_average_a(t_list *list);
void		ft_average_b(t_list *list);
void		ft_median_a(t_list * list);
void		ft_median_b(t_list * list);

//MOVIMIENTOS EN LOS STACKS
void		ft_sa(t_stack **stack_a);
void		ft_sa_help(t_stack **stack_a);
void		ft_sb_help(t_stack **stack_b);
void		ft_sb(t_stack **stack_b);
void		ft_ss(t_stack **stack_a, t_stack **stack_b);

void		ft_pa(t_stack **stack_a, t_stack **stack_b);
void		ft_pb(t_stack **stack_a, t_stack **stack_b);

void		ft_ra(t_stack **stack_a);
void		ft_ra_help(t_stack **stack_a);
void		ft_rb(t_stack **stack_b);
void		ft_rb_help(t_stack **stack_b);
void		ft_rr(t_stack **stack_a, t_stack **stack_b);

void		ft_rra(t_stack **stack_a);
void		ft_rra_help(t_stack **stack_a);
void		ft_rrb(t_stack **stack_b);
void		ft_rrb_help(t_stack **stack_b);
void		ft_rrr(t_stack **stack_a, t_stack **stack_b);

#endif
