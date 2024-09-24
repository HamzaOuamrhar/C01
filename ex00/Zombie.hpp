/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houamrha <houamrha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:25:56 by houamrha          #+#    #+#             */
/*   Updated: 2024/09/24 17:03:36 by houamrha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


class Zombie
{
	private:
		std::string name;
	public:
		Zombie(std::string name);
		void	announce(void);
		~Zombie();
};

void	randomChump(std::string name);
Zombie* newZombie(std::string name);
