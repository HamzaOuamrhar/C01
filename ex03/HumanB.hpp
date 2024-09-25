/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houamrha <houamrha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:07:10 by houamrha          #+#    #+#             */
/*   Updated: 2024/09/25 16:03:08 by houamrha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
	public:
		Weapon weapon;
		std::string name;

	public:
		HumanB (std::string name);
		HumanB (std::string name, Weapon weapon);
		void	setWeapon(Weapon weapon);
		void	attack();
};

#endif
