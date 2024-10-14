/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 02:07:20 by raalonso          #+#    #+#             */
/*   Updated: 2024/10/14 19:33:30 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

ScavTrap::ScavTrap(void) {}

ScavTrap::ScavTrap(std::string _name): ClapTrap(_name)
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap name constructor used.\n";
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor used.\n";
}

void ScavTrap::attack(const std::string& target)
{
	if (this->energyPoints > 0)
	{
		if (this->hitPoints > 0) {
			std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!\n";
			this->energyPoints--;
		}
		else
			std::cout << "ScavTrap " << this->name << " can not attack, is dead.\n";
	}
	else
		std::cout << "Not enough energy points to attack.\n";
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->name << " is in Gate keeper mode.\n";
}
