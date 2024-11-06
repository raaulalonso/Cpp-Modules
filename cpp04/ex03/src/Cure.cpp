/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 09:11:34 by raalonso          #+#    #+#             */
/*   Updated: 2024/11/04 21:31:27 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cure.hpp"

Cure::Cure(void) {
	this->type = "cure";
}

Cure::Cure(const Cure &i) {
	this->type = i.getType();
}

Cure::~Cure(void) {}

Cure &Cure::operator=(const Cure &other) {
	if (this != &other) {
		this->type = other.getType();
	}
	return (*this);
}

Cure *Cure::clone() const {
	Cure *newCure = new Cure();
	return (newCure);
}

void Cure::use(ICharacter& target)
{
	std::string target_name = target.getName();
	std::cout << "* heals " << target_name << "\'s wounds *" << std::endl;
}