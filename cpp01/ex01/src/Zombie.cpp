/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 01:30:54 by raalonso          #+#    #+#             */
/*   Updated: 2024/06/17 01:09:15 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

void Zombie::announce( void )
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::Zombie(std::string _name)
{
	this->name = _name;
}

Zombie::Zombie(void) // default constructor
{
	std::cout << "Created zombie.\n";
}

Zombie::~Zombie(void)
{
	std::cout << "Destroying: " << this->name << "\n";
}

void Zombie::setName(std::string _name)
{
	this->name = _name;
}
