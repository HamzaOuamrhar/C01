# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: houamrha <houamrha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/25 13:51:08 by houamrha          #+#    #+#              #
#    Updated: 2024/09/25 13:51:11 by houamrha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name = zombieHorde
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Zombie.cpp zombieHorde.cpp
OBJ = $(SRC:.cpp=.o)

all : $(Name)

$(Name) : $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $@

%.o : %.cpp Zombie.hpp
	c++ $(FLAGS) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(Name)

re : fclean all

.PHONY : clean
