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

int			main(int argc, char **argv);
int			ft_atoi(char *str);
long int	ft_atoi_plus(char *str);
void		ft_putstr(char *s);
void		ft_putchar(char c);
char		*ft_itoa(int n);
int			ft_strncmp(char *s1, char *s2);
size_t		ft_strlen(char *str);
char		*ft_pass_to_int(char **argv);

void		ft_errors_numbers(int argc, char **argv);
void		ft_putstr_error(char *s);
void		ft_errors_repeat(int argc, char **argv);
void		ft_int_max_value(char **argv);
#endif
