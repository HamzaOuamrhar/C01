/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houamrha <houamrha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 11:37:04 by houamrha          #+#    #+#             */
/*   Updated: 2024/09/26 12:06:41 by houamrha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl h;
	h.complain("DEBUG");
	h.complain("ERROR");
	h.complain("INFO");
	h.complain("WARNING");
	h.complain("info");
	h.complain("something");
}
