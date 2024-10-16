/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 01:43:04 by raalonso          #+#    #+#             */
/*   Updated: 2024/10/16 19:24:01 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H
# include <iostream>

class Animal
{
	protected:
		std::string type;

	public:
		Animal( void );
		Animal(const Animal &a);
		virtual ~Animal( void );
		
		Animal &operator=(const Animal &other);
		
		virtual void makeSound(void) const;
		std::string getType(void) const;
		
};

#endif