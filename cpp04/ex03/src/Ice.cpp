/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 09:11:32 by raalonso          #+#    #+#             */
/*   Updated: 2024/11/04 21:25:26 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Ice.hpp"

Ice::Ice(void) {
	this->type = "ice";
}

Ice::Ice(const Ice &i) {
	this->type = i.getType();
}

Ice::~Ice(void) {}

Ice &Ice::operator=(const Ice &other) {
	if (this != &other) {
		this->type = other.getType();
	}
	return (*this);
}

Ice *Ice::clone() const {
	Ice *newIce = new Ice();
	return (newIce);
}

void Ice::use(ICharacter& target)
{
	std::string target_name = target.getName();
	std::cout << "* shoots an ice bolt at " << target_name << " *" << std::endl;
}