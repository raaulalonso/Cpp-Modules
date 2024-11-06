/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 09:11:27 by raalonso          #+#    #+#             */
/*   Updated: 2024/11/04 21:40:46 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	std::cout << "MateriaSource was created using default constructor." << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &m)
{
	std::cout << "MateriaSource was created using copy constructor." << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->memory[i])
			delete this->memory[i];
	}
	for (int i = 0; i < 4; i++)
	{
		if (m.memory[i])
			this->memory[i] = m.memory[i]->clone();
	}
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "MateriaSource was destroyed." << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->memory[i])
			delete this->memory[i];
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->memory[i])
				delete this->memory[i];
		}
		for (int i = 0; i < 4; i++)
		{
			if (other.memory[i])
				this->memory[i] = other.memory[i]->clone();
		}
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->memory[i])
		{
			this->memory[i] = m;
			std::cout << "MateriaSource learned materia of type: " << m->getType() << std::endl;
			return;
		}
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->memory[i])
		{
			if (this->memory[i]->getType() == type)
			{
				std::cout << "MateriaSource created materia of type: " << type << std::endl;
				return (this->memory[i]->clone());
			}
		}
	}
	return (0);
}