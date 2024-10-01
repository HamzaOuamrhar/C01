# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: houamrha <houamrha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/25 15:42:30 by houamrha          #+#    #+#              #
#    Updated: 2024/10/01 13:08:49 by houamrha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name = human
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
OBJ = $(SRC:.cpp=.o)

all : $(Name)

$(Name) : $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $@

main.o : main.cpp HumanA.hpp HumanB.hpp
	c++ $(FLAGS) -c $< -o $@

HumanA.o : HumanA.cpp HumanA.hpp Weapon.hpp
	c++ $(FLAGS) -c $< -o $@

HumanB.o : HumanB.cpp HumanB.hpp Weapon.hpp
	c++ $(FLAGS) -c $< -o $@

Weapon.o : Weapon.cpp Weapon.hpp
	c++ $(FLAGS) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(Name)

re : fclean all

.PHONY : clean
