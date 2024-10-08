/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houamrha <houamrha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 11:30:16 by houamrha          #+#    #+#             */
/*   Updated: 2024/10/01 15:12:43 by houamrha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!\n\n";
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money.\n"
			<< "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n\n";
}
void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.\n"
			<< "I’ve been coming for years whereas you started working here since last month.\n\n";
}
void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now.\n\n";
}

int	Harl::complain(std::string level)
{
	int	i;

	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (i = 0; i < 4; i++)
	{
		if (levels[i] == level)
			break ;
	}
	switch(i)
	{
		case 0:
			return (debug(), info(), warning(), error(), 0);
		case 1:
			return (info(), warning(), error(), 0);
		case 2:
			return (warning(), error(), 0);
		case 3:
			return (error(), 0);
		default:
			return (std::cout << "[ Probably complaining about insignificant problems ]\n", 1);
	}
}
