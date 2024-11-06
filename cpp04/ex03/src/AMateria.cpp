/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 09:11:38 by raalonso          #+#    #+#             */
/*   Updated: 2024/11/04 21:30:11 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AMateria.hpp"

AMateria::AMateria(void) {
	std::cout << "AMateria was created using default constructor." << std::endl;
}

AMateria::AMateria(const AMateria &a) {
	std::cout << "AMateria was created using copy constructor." << std::endl;
	this->type = a.getType();
}

AMateria::AMateria(std::string const &_type) {
	std::cout << "AMateria was created using type constructor." << std::endl;
	this->type = _type;
}

AMateria::~AMateria(void) {
	std::cout << "AMateria was destroyed." << std::endl;
}

AMateria &AMateria::operator=(const AMateria &other) {
	if (this != &other)	{
		this->type = other.getType();
	}
	return (*this);
}

const std::string &AMateria::getType() const {
	return (this->type);
}

void AMateria::use(ICharacter &target) {
	target.getName();
}



