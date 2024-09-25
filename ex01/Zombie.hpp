/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houamrha <houamrha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:25:56 by houamrha          #+#    #+#             */
/*   Updated: 2024/09/25 12:20:56 by houamrha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


class Zombie
{
	private:
		std::string name;
	public:
		Zombie();
		Zombie(std::string name);
		void	announce(void);
		~Zombie();
		void setName(std::string name);
};

Zombie*	zombieHorde(int N, std::string name);
