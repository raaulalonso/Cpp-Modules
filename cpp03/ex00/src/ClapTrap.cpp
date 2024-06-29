/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 17:40:21 by raalonso          #+#    #+#             */
/*   Updated: 2024/06/29 02:14:13 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

ClapTrap::ClapTrap(void) {}

ClapTrap::ClapTrap(ClapTrap &c)
{
	std::cout << "Copy constructor used.\n";
	this->name = c.name;
	this->hitPoints = c.hitPoints;
	this->energyPoints = c.energyPoints;
	this->attackDamage = c.attackDamage;
}

ClapTrap::ClapTrap(std::string _name)
{
	std::cout << "Name constructor used.\n";
	this->name = _name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
}

ClapTrap::~ClapTrap(void) 
{
	std::cout << "Destructor used.\n";
}

ClapTrap &ClapTrap::operator=(const ClapTrap &c)
{
	if (this != &c)
	{
		this->name = c.name;
		this->hitPoints = c.hitPoints;
		this->energyPoints = c.energyPoints;
		this->attackDamage = c.attackDamage;
	}
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (energyPoints > 0)
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!\n";
		energyPoints--;
	}
	else
		std::cout << "Not enough energy points to attack.\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage!\n";
	hitPoints -= amount;
	if (hitPoints <= 0)
		std::cout << "ClapTrap " << this->name << " dies.\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (energyPoints > 0)
	{
		std::cout << "ClapTrap " << this->name << " repairs " << amount << " points!\n";
		energyPoints--;
	}
	else
		std::cout << "Not enough energy points to repair.\n";
}

