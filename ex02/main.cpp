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
	std::string ref = "HI THIS IS BRAIN";
	std::string *ref_p = &ref;
	std::string &ref_ref = ref;

	std::cout << &ref << std::endl;
	std::cout << ref_p << std::endl;
	std::cout << &ref_ref << std::endl;

	std::cout << ref << std::endl;
	std::cout << *ref_p << std::endl;
	std::cout << ref_ref << std::endl;
}
