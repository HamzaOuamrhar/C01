/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houamrha <houamrha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:47:29 by houamrha          #+#    #+#             */
/*   Updated: 2024/10/01 15:45:30 by houamrha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void	replace_line(std::string &line, std::ofstream &output, std::string &s1, std::string &s2)
{
	size_t	pos;

	pos = 0;
	while (pos < line.length())
	{
		pos = line.find(s1, pos);
		if (pos < line.length())
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
		}
	}
	output << line;
}

int main(int argc, char **argv)
{
	if (argc != 4)
		std::cout << "Wrong number of arguments!" << std::endl;
	else
	{
		std::string fileName = argv[1];
		std::ifstream input(fileName.c_str());
		std::string line;
		std::string s1 = argv[2];
		std::string s2 = argv[3];
		if (!input.is_open())
			return (std::cout << "Cannot open file\n", 1);
		std::ofstream output((fileName + ".replace").c_str());
		if (!output.is_open())
			return (std::cout << "Cannot create file\n", 1);
		while (1)
		{
			std::getline(input, line);
			replace_line(line, output, s1, s2);
			if (!input.eof())
				output << std::endl;
			else
				break ;
		}
		input.close();
		output.close();
	}
}
