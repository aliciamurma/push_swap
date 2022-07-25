# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amurcia- <amurcia-@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/11 12:36:39 by amurcia-          #+#    #+#              #
#    Updated: 2022/07/11 12:36:43 by amurcia-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADER = push_swap.h

NAME = push_swap

SRC_MOVEMENTS = movements/sa_sb.c movements/pa_pb.c movements/ra_rb.c movements/rra_rrb.c

SRC_UTILS = utils/ft_atoi.c utils/ft_itoa.c utils/ft_putstr.c utils/ft_strncmp.c

SRC_FIVE = min_max_five.c five_num.c

SRC_ALGOR = main.c check.c min_max.c more_num.c median_average.c

SRC = $(SRC_ALGOR) $(SRC_FIVE) $(SRC_UTILS) $(SRC_MOVEMENTS)
OBJ = $(SRC:.c=.o)

DEPS = $(SRC:.c=.d)

CC = gcc

RM  =  rm -f

FLAGS  = -Wextra -Wall -Werror -MMD

%.o : %.c
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

-include $(DEPS)

$(NAME) : $(OBJ) $(HEADER)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean :
	$(RM) $(OBJ)
	$(RM) $(DEPS)

fclean : clean
	$(RM) $(NAME)

.PHONY : all clean fclean re
