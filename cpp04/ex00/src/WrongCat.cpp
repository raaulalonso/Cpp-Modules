/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 18:05:50 by raalonso          #+#    #+#             */
/*   Updated: 2024/10/16 19:05:04 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongCat.hpp"

WrongCat::WrongCat(void) {
	this->type = "WrongCat";
	std::cout << "WrongCat default constructor called.\n";
}

WrongCat::WrongCat(const WrongCat &c) {
	std::cout << "WrongCat copy constructor called.\n";
	this->type = c.type;
}

WrongCat::~WrongCat(void) {
	std::cout << "WrongCat destructor called.\n";
}

void WrongCat::makeSound(void) const {
	std::cout << "MIAU\n";
}