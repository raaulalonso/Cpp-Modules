/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 01:31:14 by raalonso          #+#    #+#             */
/*   Updated: 2024/09/17 18:33:16 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanB.hpp"

void HumanB::attack(void)
{
	std::cout << this->name << " attacks with their " 
			  << this->weapon->getType() << "\n";
}

HumanB::HumanB(std::string _name): weapon(NULL)
{
	this->name = _name;	
}

void HumanB::setWeapon(Weapon &_weapon)
{
	this->weapon = &_weapon;
}
