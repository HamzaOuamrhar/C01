# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: houamrha <houamrha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/25 13:26:17 by houamrha          #+#    #+#              #
#    Updated: 2024/10/01 11:56:00 by houamrha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror -std=c++98

all : ref

ref : main.cpp
	c++ $(FLAGS) main.cpp -o ref

clean :
	rm -f ref

fclean : clean

re : all fclean

.PHONY : clean
