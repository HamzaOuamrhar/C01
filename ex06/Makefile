# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: houamrha <houamrha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/25 13:51:08 by houamrha          #+#    #+#              #
#    Updated: 2024/09/26 18:30:55 by houamrha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name = harlFilter
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Harl.cpp
OBJ = $(SRC:.cpp=.o)

all : $(Name)

$(Name) : $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $@

%.o : %.cpp Harl.hpp
	c++ $(FLAGS) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(Name)

re : fclean all

.PHONY : clean
