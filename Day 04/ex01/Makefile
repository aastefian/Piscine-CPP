# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: svilau <svilau@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/01 16:45:45 by svilau            #+#    #+#              #
#    Updated: 2018/10/06 17:48:14 by svilau           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = galacticBattle

MAKE = make
MAKE_FLAGS = --no-print-directory

CC = clang++
CC_FLAGS = -Wall -Werror -Wextra -g

SRC_DIR = .
SRC =	$(SRC_DIR)/main.cpp \
		$(SRC_DIR)/AWeapon.class.cpp \
		$(SRC_DIR)/Character.class.cpp \
		$(SRC_DIR)/Enemy.class.cpp \
		$(SRC_DIR)/PowerFist.class.cpp \
		$(SRC_DIR)/RadScorpion.class.cpp \
		$(SRC_DIR)/PlasmaRifle.class.cpp \
		$(SRC_DIR)/SuperMutant.class.cpp \

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
