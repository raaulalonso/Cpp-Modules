/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 01:43:04 by raalonso          #+#    #+#             */
/*   Updated: 2024/06/22 02:18:40 by raalonso         ###   ########.fr       */
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
		Fixed(Fixed &f);
		~Fixed( void );
		Fixed &operator=(Fixed &other);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		
};

#endif