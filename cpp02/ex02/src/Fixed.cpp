/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 01:42:53 by raalonso          #+#    #+#             */
/*   Updated: 2024/10/03 21:21:08 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

///////////////////////////////////////////////////////////
// ----------- // CONSTRUCTORS/DESTRUCTOR // ----------- //
///////////////////////////////////////////////////////////

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

/////////////////////////////////////////////
// ----------- // OPERATORS // ----------- //
/////////////////////////////////////////////

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

bool Fixed::operator>(const Fixed &f)
{
	return (this->getRawBits() > f.getRawBits());
}

bool Fixed::operator<(const Fixed &f)
{
	return (this->getRawBits() < f.getRawBits());
}

bool Fixed::operator>=(const Fixed &f)
{
	return (this->getRawBits() >= f.getRawBits());
}

bool Fixed::operator<=(const Fixed &f)
{
	return (this->getRawBits() <= f.getRawBits());
}

bool Fixed::operator==(const Fixed &f)
{
	return (this->getRawBits() == f.getRawBits());
}

bool Fixed::operator!=(const Fixed &f)
{
	return (this->getRawBits() != f.getRawBits());
}

Fixed Fixed::operator+(const Fixed &f)
{
	return (Fixed(this->toFloat() + f.toFloat()));
}

Fixed Fixed::operator-(const Fixed &f)
{
	return (Fixed(this->toFloat() - f.toFloat()));
}

Fixed Fixed::operator*(const Fixed &f)
{
	return (Fixed(this->toFloat() * f.toFloat()));
}

Fixed Fixed::operator/(const Fixed &f)
{
	return (Fixed(this->toFloat() / f.toFloat()));
}

/*Fixed &Fixed::operator++()
{
	float n = this->toFloat();
	n++;
	this->value = Fixed(n).getRawBits();
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	float n = this->toFloat();
	n++;
	this->value = Fixed(n).getRawBits();
	return temp;
}

Fixed &Fixed::operator--()
{
	float n = this->toFloat();
	n--;
	this->value = Fixed(n).getRawBits();
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	float n = this->toFloat();
	n--;
	this->value = Fixed(n).getRawBits();
	return temp;
}*/

Fixed &Fixed::operator++()
{
	this->value++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	this->value++;
	return temp;
}

Fixed &Fixed::operator--()
{
	this->value--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	this->value--;
	return temp;
}
	
////////////////////////////////////////////////////
// ----------- // MEMBER FUNCTIONS // ----------- //
////////////////////////////////////////////////////

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

Fixed &Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f1.getRawBits() < f2.getRawBits())
		return (f1);
	else
		return (f2);
}

const Fixed &Fixed::min(const Fixed &f1, const Fixed &f2)
{
	if (f1.getRawBits() < f2.getRawBits())
		return (f1);
	else
		return (f2);
}

Fixed &Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1.getRawBits() > f2.getRawBits())
		return (f1);
	else
		return (f2);
}

const Fixed &Fixed::max(const Fixed &f1, const Fixed &f2)
{
	if (f1.getRawBits() > f2.getRawBits())
		return (f1);
	else
		return (f2);	
}
