/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 02:49:05 by raalonso          #+#    #+#             */
/*   Updated: 2024/10/14 19:33:10 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FragTrap.hpp"

FragTrap::FragTrap(void) {}

FragTrap::FragTrap(std::string _name): ClapTrap(_name)
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap name constructor used.\n";
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor used.\n";
}

void FragTrap::attack(const std::string& target)
{
	if (this->energyPoints > 0)
	{
		if (this->hitPoints > 0) {
			std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!\n";
			this->energyPoints--;
		}
		else
			std::cout << "ScavTrap " << this->name << " can not attack, is dead.\n";
	}
	else
		std::cout << "Not enough energy points to attack.\n";
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->name << " requested a high five!\n";
}
