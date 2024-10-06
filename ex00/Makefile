# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: houamrha <houamrha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/06 17:41:09 by houamrha          #+#    #+#              #
#    Updated: 2024/10/06 17:41:12 by houamrha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name = zombie
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp
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
