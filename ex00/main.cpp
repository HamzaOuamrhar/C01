/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houamrha <houamrha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:47:19 by houamrha          #+#    #+#             */
/*   Updated: 2024/10/01 11:44:16 by houamrha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *b = newZombie("Booo");
	b->announce();

	Zombie z("Zooo");
	z.announce();

	randomChump("Kooo");

	delete b;
}
