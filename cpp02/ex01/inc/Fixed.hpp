/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 01:43:04 by raalonso          #+#    #+#             */
/*   Updated: 2024/10/03 17:34:17 by raalonso         ###   ########.fr       */
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
		Fixed( void );
		Fixed(int const _value);
		Fixed(float const _value);
		Fixed(const Fixed &f);
		~Fixed( void );

		Fixed &operator=(const Fixed &f);
		friend std::ostream &operator<<(std::ostream &output, const Fixed &f);

		
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
		
};

#endif