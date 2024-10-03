/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 01:43:04 by raalonso          #+#    #+#             */
/*   Updated: 2024/10/03 21:23:18 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H
# include <iostream>

class Fixed
{
	private:
		int value;
		static const int nFracBits = 8;
		
	public:
	// CONSTRUCTORS / DESTRUCTOR
		Fixed( void );
		Fixed(int const _value);
		Fixed(float const _value);
		Fixed(const Fixed &f);
		~Fixed( void );

	// OPERATORS
		Fixed &operator=(const Fixed &f);
		friend std::ostream &operator<<(std::ostream &output, const Fixed &f);
		bool operator>(const Fixed &f);
		bool operator<(const Fixed &f);
		bool operator>=(const Fixed &f);
		bool operator<=(const Fixed &f);
		bool operator==(const Fixed &f);
		bool operator!=(const Fixed &f);
		Fixed operator+(const Fixed &f);
		Fixed operator-(const Fixed &f);
		Fixed operator*(const Fixed &f);
		Fixed operator/(const Fixed &f);
		Fixed &operator++();
		Fixed operator++(int); // (int) indicates its the postfix version
		Fixed &operator--();
		Fixed operator--(int);

	// MEMBER FUNCTIONS
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
		static Fixed &min(Fixed &f1, Fixed &f2);
		static const Fixed &min(const Fixed &f1, const Fixed &f2);
		static Fixed &max(Fixed &f1, Fixed &f2);
		static const Fixed &max(const Fixed &f1, const Fixed &f2);
		
};

#endif