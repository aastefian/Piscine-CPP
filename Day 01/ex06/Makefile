# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: svilau <svilau@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/01 16:45:45 by svilau            #+#    #+#              #
#    Updated: 2018/10/04 10:18:16 by svilau           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = unnecessaryViolence

MAKE = make
MAKE_FLAGS = --no-print-directory

CC = clang++
CC_FLAGS = -Wall -Werror -Wextra

SRC_DIR = .
SRC =	$(SRC_DIR)/main.cpp \
		$(SRC_DIR)/Weapon.class.cpp \
		$(SRC_DIR)/HumanA.class.cpp \
		$(SRC_DIR)/HumanB.class.cpp \

RM = rm -f
RF = rm -rf

all: $(NAME)

$(NAME):
	@printf '\033[K\033[32m[✔] %s\n\033[0m' "--Compiling Sources--------"
	@$(CC) $(CC_FLAGS) -o $(NAME) $(SRC)
	@printf '\033[1;7m'
	@printf '\033[33m[✔] %s\n\033[0m' "--DONE--------"

clean:
	@printf '\033[1;7m'
	@printf '\033[31m[✔] %s\n\033[0m' "--Cleaning  Files--------"

###################################################
##--- Clean ALl                                  ##
###################################################

fclean: clean
	@printf '\033[1;7m'
	@printf '\033[31m[✔] %s\n\033[0m' "--Cleaning Executable and All Object--------"
	@$(RM) $(NAME)

re: fclean all
