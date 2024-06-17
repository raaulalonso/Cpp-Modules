/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 01:31:16 by raalonso          #+#    #+#             */
/*   Updated: 2024/06/17 02:17:00 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanA.hpp"

void HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " 
			  << this->weapon.getType() << "\n";
}

HumanA::HumanA(std::string _name, Weapon &_weapon) : weapon(_weapon), name(_name) {}
