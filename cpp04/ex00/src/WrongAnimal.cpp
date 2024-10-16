/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 18:05:52 by raalonso          #+#    #+#             */
/*   Updated: 2024/10/16 19:05:08 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {
	this->type = "Some WrongAnimal.";
	std::cout << "WrongAnimal default constructor called.\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &a) {
	std::cout << "WrongAnimal copy constructor called.\n";
	this->type = a.type;
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "WrongAnimal destructor called.\n";
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
	if (this != &other) 
        this->type = other.type;
	return *this;
}

void WrongAnimal::makeSound(void) const {}

std::string WrongAnimal::getType(void) const {
	return (this->type);
}