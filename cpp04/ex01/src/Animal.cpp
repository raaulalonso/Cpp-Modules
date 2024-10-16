/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 18:05:52 by raalonso          #+#    #+#             */
/*   Updated: 2024/10/16 18:52:56 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

Animal::Animal(void) {
	this->type = "Some animal.";
	std::cout << "Animal default constructor called.\n";
}

Animal::Animal(const Animal &a) {
	std::cout << "Animal copy constructor called.\n";
	this->type = a.type;
}

Animal::~Animal(void) {
	std::cout << "Animal destructor called.\n";
}

Animal &Animal::operator=(const Animal &other) {
	if (this != &other) 
        this->type = other.type;
	return *this;
}

void Animal::makeSound(void) const {}

std::string Animal::getType(void) const {
	return (this->type);
}