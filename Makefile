# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amurcia- <amurcia-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/11 12:36:39 by amurcia-          #+#    #+#              #
#    Updated: 2022/12/25 20:38:57 by amurcia-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GREEN			:= \033[32m
NC				:= \033[m
BLUE			:= \033[34m

# FLAGS
CC = gcc
FLAGS  = -Wextra -Wall -Werror
DEPFLAGS = -MMD -MF

# NAME
NAME 			= push_swap

# SOURCES
MAIN			= main.c
SRC_MOVEMENTS 	= sa_sb.c pa_pb.c ra_rb.c rra_rrb.c
SRC_UTILS 		= ft_atoi.c ft_itoa.c ft_putstr.c ft_strncmp.c
SRC_FIVE 		= min_max_five.c five_num.c
SRC_ALGOR 		= create_delete.c check.c min_max_a.c min_max_b.c more_num.c
SRC		 		= $(SRC_ALGOR) $(SRC_FIVE) $(SRC_UTILS) $(SRC_MOVEMENTS)

# FOLDERS
OBJ_DIR			:= obj
BIN_DIR			:= bin

#INCLUDES
INCLUDES 		:= inc
INC				= $(addprefix -I , $(INCLUDES))

# OBJECTS
OBJ_MAIN		= $(addprefix $(OBJ_DIR)/, $(MAIN:.c=.o))
OBJ_SRC			= $(addprefix $(OBJ_DIR)/, $(SRC:.c=.o))
OBJ				= $(OBJ_MAIN) $(OBJ_SRC)

# DEPENDENCIES
DEPS			= $(patsubst %.o, %.d, $(OBJ)) 

# BINARY PATH
BIN 			= $(BIN_DIR)/$(NAME)

RM  			=  rm -f
RM_DIR 			=  rmdir

vpath %.c src src/utils src/movements

.SECONDEXPANSION:

all: $(BIN)

$(OBJ_DIR)/%.o: %.c | $$(@D)
	@$(CC) $(FLAGS) -c $(INC) $< -o $@ $(DEPFLAGS) $(patsubst %.o, %.d, $@) 
	@echo "$(BLUE)Compiling... $(NC)" $@

$(BIN): $(OBJ) $(BIN_DIR)
	@$(CC) $(FLAGS) $(INC) $(OBJ) -o $(BIN)
	@echo "$(GREEN)$(NAME) compiled!$(NC)"

clean :
	$(RM) $(OBJ)
	$(RM) $(DEPS)
	@echo "$(GREEN)$(NAME) cleaned!$(NC)"

fclean : clean
	@$(RM) $(BIN)

re : fclean all

run: all
	@./$(BIN) 12 76 94 73 -4

leaks: $(BIN)
	@leaks -atExit -- ./$(BIN) 12 76 94 73 -4

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(BIN_DIR):
	@mkdir -p $(BIN_DIR)

-include $(DEPS)

.PHONY : all clean fclean re run leaks
