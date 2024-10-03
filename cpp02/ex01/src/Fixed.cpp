/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 01:42:53 by raalonso          #+#    #+#             */
/*   Updated: 2024/10/03 20:56:33 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called\n";
	this->value = 0;
}

Fixed::Fixed(int const _value)
{
	std::cout << "Int constructor called\n";
	this->value = (_value << nFracBits);
}

Fixed::Fixed(float const _value)
{
	std::cout << "Float constructor called\n";
	this->value = (_value * (1 << nFracBits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
};

Fixed::Fixed(const Fixed &f)
{
	std::cout << "Copy constructor called\n";
	this->value = f.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &f)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &f)
        this->value = f.value;
	return *this;
}

std::ostream &operator<<(std::ostream &output, const Fixed &f)
{	
	output << f.toFloat();
	return (output);
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

float Fixed::toFloat(void) const
{
	return (float)(value) / (1 << nFracBits);
}

int Fixed::toInt(void) const
{
	return (this->value >> nFracBits);
}
