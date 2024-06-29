/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 02:49:05 by raalonso          #+#    #+#             */
/*   Updated: 2024/06/29 03:00:23 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FragTrap.hpp"

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
		std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!\n";
		this->energyPoints--;
	}
	else
		std::cout << "Not enough energy points to attack.\n";
}

void FragTrap::takeDamage(unsigned int amount)
{
	std::cout << "FragTrap " << this->name << " takes " << amount << " points of damage!\n";
	hitPoints -= amount;
	if (hitPoints <= 0)
		std::cout << "FragTrap " << this->name << " dies.\n";
}

void FragTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints > 0)
	{
		std::cout << "FragTrap " << this->name << " repairs " << amount << " points!\n";
		this->hitPoints += amount;
		this->energyPoints--;
	}
	else
		std::cout << "Not enough energy points to repair.\n";
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->name << " requested a high five!\n";
}
