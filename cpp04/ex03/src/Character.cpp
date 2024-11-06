/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 09:11:36 by raalonso          #+#    #+#             */
/*   Updated: 2024/11/04 21:59:56 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Character.hpp"

Character::Character(void): name("default") {
	std::cout << "Character was created using default constructor with name: default" << std::endl;
}

Character::Character(std::string _name) : name(_name) {
	std::cout << "Character was created using name constructor with name " << _name << std::endl;
}

Character::Character(const Character &c)
{
	std::cout << "Character was created using copy constructor." << std::endl;
	// no se puede cambiar el nombre porque es constante
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
	}
	for (int i = 0; i < 4; i++)
	{
		if (c.inventory[i])
			this->inventory[i] = c.inventory[i]->clone();
	}
}

Character::~Character(void)
{
	std::cout << "Character with name " << this->getName() << " was destroyed." << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
	}
}

Character &Character::operator=(const Character &other)
{
	// no se puede cambiar el nombre porque es constante
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->inventory[i])
				delete this->inventory[i];
		}
		for (int i = 0; i < 4; i++)
		{
			if (other.inventory[i])
				this->inventory[i] = other.inventory[i]->clone();
		}
	}
	return (*this);
}

void Character::equip(AMateria *m)
{
	if (m)
	{
		for (int i = 0; i < 4; i++)
		{
			if (!this->inventory[i]) {
				this->inventory[i] = m ;
				std::cout << "Character with name " << this->getName() << " equiped materia of type: " << m->getType() << std::endl;
				return ;
			}
		}
	}
}

std::string const &Character::getName() const
{
	return (this->name);
}

void Character::unequip(int idx)
{
	if (idx < 4 && idx >= 0)
	{
		if (this->inventory[idx])
		{
			std::cout << "Unequiped " << this->inventory[idx]->getType() << " materia for character " << this->getName() << std::endl;
			this->inventory[idx] = NULL;
		}
		else
			std::cout << "Error: Nothing equiped at slot " << idx << " for character " << this->getName() << std::endl;
	}
	else
		std::cout << "Error: Invalid index in unequip method for character " << this->getName() << std::endl;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 4 && idx >= 0)
	{
		if (this->inventory[idx])
			this->inventory[idx]->use(target);
		else
			std::cout << "Error: Empty slot in use method for character " << this->getName() << std::endl;
	}
	else
		std::cout << "Error: Invalid index in use method for character " << this->getName() << std::endl;
}

AMateria *Character::getMateriaFromInventory(int idx) {
	if (idx < 4 && idx >= 0)
	{
		if (this->inventory[idx])
		{
			return (this->inventory[idx]);
		}
		else 
			std::cout << "Error: Nothing equiped at slot " << idx << " for character " << this->getName() << std::endl;
	}
	else
		std::cout << "Error: Invalid index in getMaterialFromInventory method for character " << this->getName() << std::endl;
	
	return (0);
}