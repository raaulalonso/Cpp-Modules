/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 01:42:53 by raalonso          #+#    #+#             */
/*   Updated: 2024/10/03 17:22:32 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called\n";
	this->value = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
};

Fixed::Fixed(Fixed &f)
{
	std::cout << "Copy constructor called\n";
	this->value = f.getRawBits();
}

Fixed &Fixed::operator=(Fixed &other)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &other) 
        this->value = other.value;
	return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (this->value);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called\n";
	this->value = raw;
}
