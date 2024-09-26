# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: houamrha <houamrha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/25 15:42:30 by houamrha          #+#    #+#              #
#    Updated: 2024/09/25 17:47:20 by houamrha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name = rep
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp
OBJ = $(SRC:.cpp=.o)

all : $(Name)

$(Name) : $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $@

%.o : %.cpp
	c++ $(FLAGS) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(Name)

re : fclean all

.PHONY : clean
