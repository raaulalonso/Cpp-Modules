/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 18:05:48 by raalonso          #+#    #+#             */
/*   Updated: 2024/10/16 18:52:02 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

Dog::Dog(void) {
	this->type = "Dog";
	std::cout << "Dog default constructor called.\n";
}

Dog::Dog(const Dog &d) {
	std::cout << "Dog copy constructor called.\n";
	this->type = d.type;
}

Dog::~Dog(void) {
	std::cout << "Dog destructor called.\n";
}

void Dog::makeSound(void) const {
	std::cout << "WOW\n";
}