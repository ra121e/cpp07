# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/20 22:41:09 by athonda           #+#    #+#              #
#    Updated: 2025/06/24 09:15:41 by athonda          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Array

SRC_F	=	main.cpp

SRC_DIR	=	.
SRC		=	$(SRC_F:%.cpp=$(SRC_DIR)/%.cpp)

OBJ_DIR	=	obj
OBJ		=	$(patsubst %.cpp,$(OBJ_DIR)/%.o,$(SRC_F))

DEP_EX	=	Array.hpp Array.tpp
INC_DIR	=	.
DEP		=	$(wildcard $(patsubst %.cpp,%(INC_DIR)/%.hpp,$(SRC_F))) $(DEP_EX)

CC		=	c++
CFLAGS	=	-g -Wall -Wextra -Werror -std=c++98
IFLAGS	=	-I$(INC_DIR)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp $(DEP)
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

.PHONY: all clean fclean re

all: $(NAME)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

norm:
	clear
	nm -u $(NAME)
	grep -n -e "main" -e "printf" -e "alloc" -e "free" $(SRC) $(DEP) || true