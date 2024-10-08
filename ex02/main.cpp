/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houamrha <houamrha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 13:26:14 by houamrha          #+#    #+#             */
/*   Updated: 2024/09/25 14:41:15 by houamrha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "string address: " << &string << std::endl;
	std::cout << "pointing to address: " << stringPTR << std::endl;
	std::cout << "reference to address: " << &stringREF << std::endl;

	std::cout << "string contect: " << string << std::endl;
	std::cout << "pointing to content: " << *stringPTR << std::endl;
	std::cout << "reference to content: " <<  stringREF << std::endl;
}
