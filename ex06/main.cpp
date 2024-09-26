/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houamrha <houamrha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 11:37:04 by houamrha          #+#    #+#             */
/*   Updated: 2024/09/26 18:12:35 by houamrha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl	h;

	if (argc != 2)
	{
		std::cout << "Wrong number of arguments!\n";
		return (1);
	}
	h.complain(argv[1]);
}
