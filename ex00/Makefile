# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: siun <siun@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/12 17:22:15 by siun              #+#    #+#              #
#    Updated: 2024/03/12 17:35:30 by siun             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = Zombie.cpp newZombie.cpp randomChump.cpp main.cpp
HDRS = Zombie.hpp
OBJ = $(SRC:.cpp=.o)
CC = g++
RM = rm -f
CPPFLAGS = -g -Wall -Wextra -Werror -std=c++98

NAME = zombie

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re