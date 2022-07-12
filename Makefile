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

SRC = main.c check.c pass_to_int.c utils/ft_atoi.c utils/ft_itoa.c utils/ft_putstr.c utils/ft_strncmp.c
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
