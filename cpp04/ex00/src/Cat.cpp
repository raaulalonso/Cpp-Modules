/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 18:05:50 by raalonso          #+#    #+#             */
/*   Updated: 2024/10/16 18:49:43 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

Cat::Cat(void) {
	this->type = "Cat";
	std::cout << "Cat default constructor called.\n";
}

Cat::Cat(const Cat &c) {
	std::cout << "Cat copy constructor called.\n";
	this->type = c.type;
}

Cat::~Cat(void) {
	std::cout << "Cat destructor called.\n";
}

void Cat::makeSound(void) const {
	std::cout << "MIAU\n";
}