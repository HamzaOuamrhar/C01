/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houamrha <houamrha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:40:42 by houamrha          #+#    #+#             */
/*   Updated: 2024/09/25 16:02:27 by houamrha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	Weapon weapon1("gun1");
	weapon1.setType("gun2");
	HumanA human1("hamza", weapon1);
	human1.attack();

	Weapon weapon2("knife");
	HumanB human2("ayoub", weapon2);
	human2.attack();

	HumanB human3("ayoub");
	Weapon weapon3("sword");
	human3.setWeapon(weapon3);
	human3.attack();
}
