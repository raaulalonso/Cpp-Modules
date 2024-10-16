/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:12:36 by raalonso          #+#    #+#             */
/*   Updated: 2024/10/16 19:31:30 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.hpp"

Brain::Brain(void) {
	std::cout << "Brain default constructor called.\n";
}

Brain::Brain(const Brain &b) {
	for (size_t i = 0; i < this->ideas->length(); i++) {
		this->ideas[i] = b.ideas[i];
	}
	std::cout << "Brain copy constructor called.\n";
}

Brain::~Brain(void) {
	std::cout << "Brain destructor called.\n";
}

Brain &Brain::operator=(const Brain &other) {
	if (this != &other) {
		for (size_t i = 0; i < this->ideas->length(); i++) {
			this->ideas[i] = other.ideas[i];
		}
	}
	return *this;
}
