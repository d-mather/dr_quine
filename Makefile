# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmather <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/18 11:11:35 by dmather           #+#    #+#              #
#    Updated: 2017/11/22 13:45:11 by dmather          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FIRST_NAME		= Colleen
FIRST_BONUS		= ColleenB
SECOND_NAME		= Grace
SECOND_BONUS	= GraceB
THIRD_NAME		= Sully
THIRD_BONUS		= SullyB
NC				= \033[0m
CR				= \033[31m
CB				= \033[34m
CP				= \033[38;5;128m
CY				= \033[33m
FLAGS			= -Wall -Wextra -Werror
COMPILER		= clang

FIRST_SRC		= Colleen.c
FIRST_SRC_B		= Colleen.cpp
SECOND_SRC		= Grace.c
SECOND_SRC_B	= Grace.cpp
THIRD_SRC		= Sully.c
THIRD_SRC_B		= Sully.cpp

all: $(FIRST_NAME) $(SECOND_NAME) $(THIRD_NAME) msg

$(FIRST_NAME):
		@$(COMPILER) $(FLAGS) $(FIRST_SRC) -o $(FIRST_NAME)
		@echo "$(CB)$(FIRST_NAME) ==> Made '$(FIRST_NAME)'$(NC)"

$(SECOND_NAME):
		@$(COMPILER) $(FLAGS) $(SECOND_SRC) -o $(SECOND_NAME)
		@echo "$(CB)$(SECOND_NAME) ==> Made '$(SECOND_NAME)'$(NC)"

$(THIRD_NAME):
		@$(COMPILER) $(FLAGS) $(THIRD_SRC) -o $(THIRD_NAME)
		@echo "$(CB)$(THIRD_NAME) ==> Made '$(THIRD_NAME)'$(NC)"

msg:
		@echo "$(CR)Terminal Broken!$(NC)"
		@sleep 2
		@echo "Just Kidding ;)"
		@sleep 1

clean:
		@if [ -a "tmp_$(FIRST_NAME)" ]; then \
			rm -f tmp_$(FIRST_NAME); \
			echo "$(CR)$(FIRST_NAME) ==> Removed $(FIRST_NAME)'s sub-file$(NC)"; \
		fi;
		@if [ -a "$(SECOND_NAME)_kid.c" ]; then \
			rm -f $(SECOND_NAME)_kid.c; \
			echo "$(CR)$(SECOND_NAME) ==> Removed $(SECOND_NAME)'s sub-file$(NC)"; \
		fi;
		@if [ "Sully_*" ]; then \
			rm -f Sully_*; \
			echo "$(CR)$(THIRD_NAME) ==> Attempted to remove all $(THIRD_NAME)'s sub-files$(NC)"; \
		fi;
		@if [ -a "tmp_$(FIRST_BONUS)" ]; then \
			rm -f tmp_$(FIRST_BONUS); \
			echo "$(CR)$(FIRST_BONUS) ==> Removed $(FIRST_BONUS)'s sub-file$(NC)"; \
		fi;
		@if [ -a "$(SECOND_BONUS)_kid.c" ]; then \
			rm -f $(SECOND_BONUS)_kid.c; \
			echo "$(CR)$(SECOND_BONUS) ==> Removed $(SECOND_BONUS)'s sub-file$(NC)"; \
		fi;
		@if [ "SullyB_*" ]; then \
			rm -f SullyB_*; \
			echo "$(CR)$(THIRD_BONUS) ==> Attempted to remove all $(THIRD_BONUS)'s sub-files$(NC)"; \
		fi;

fclean: clean
		@if [ -a $(FIRST_NAME) ]; then \
			rm -f $(FIRST_NAME); \
			echo "$(CR)$(FIRST_NAME) ==> Removed '$(FIRST_NAME)'$(NC)"; \
		fi;
		@if [ -a $(SECOND_NAME) ]; then \
			rm -f $(SECOND_NAME); \
			echo "$(CR)$(SECOND_NAME) ==> Removed '$(SECOND_NAME)'$(NC)"; \
		fi;
		@if [ -a $(THIRD_NAME) ]; then \
			rm -f $(THIRD_NAME); \
			echo "$(CR)$(THIRD_NAME) ==> Removed '$(THIRD_NAME)'$(NC)"; \
		fi;
		@if [ -a $(FIRST_BONUS) ]; then \
			rm -f $(FIRST_BONUS); \
			echo "$(CR)$(FIRST_BONUS) ==> Removed '$(FIRST_BONUS)'$(NC)"; \
		fi;
		@if [ -a $(SECOND_BONUS) ]; then \
			rm -f $(SECOND_BONUS); \
			echo "$(CR)$(SECOND_BONUS) ==> Removed '$(SECOND_BONUS)'$(NC)"; \
		fi;
		@if [ -a $(THIRD_BONUS) ]; then \
			rm -f $(THIRD_BONUS); \
			echo "$(CR)$(THIRD_BONUS) ==> Removed '$(THIRD_BONUS)'$(NC)"; \
		fi;

re: fclean all

bonus: bonuses msg

bonuses:
		@$(COMPILER) $(FLAGS) $(FIRST_SRC_B) -o $(FIRST_BONUS)
		@echo "$(CB)$(FIRST_BONUS) ==> Made '$(FIRST_BONUS)'$(NC)"
		@$(COMPILER) $(FLAGS) $(SECOND_SRC_B) -o $(SECOND_BONUS)
		@echo "$(CB)$(SECOND_BONUS) ==> Made '$(SECOND_BONUS)'$(NC)"
		@$(COMPILER) $(FLAGS) $(THIRD_SRC_B) -o $(THIRD_BONUS)
		@echo "$(CB)$(THIRD_BONUS) ==> Made '$(THIRD_BONUS)'$(NC)"

