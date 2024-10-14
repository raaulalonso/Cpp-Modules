/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 17:38:52 by raalonso          #+#    #+#             */
/*   Updated: 2024/10/14 19:47:41 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string _name): ClapTrap(_name + "_clap_name"), FragTrap(_name), ScavTrap(_name)
{
	this->name = _name;
	this->FragTrap::hitPoints = 100;
	this->ScavTrap::energyPoints = 50;
	this->FragTrap::attackDamage = 30;
	std::cout << "DiamondTrap name constructor used.\n";
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor used.\n";
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap with name: " << this->name << " And ClapTrap name: " << this->ClapTrap::name << "\n";
}
