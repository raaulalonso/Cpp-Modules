/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 01:43:04 by raalonso          #+#    #+#             */
/*   Updated: 2024/10/16 19:53:48 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{
	private:
		Brain *brain;

	public:
		Dog( void );
		Dog(const Dog &d);
		~Dog( void );
		
		Dog &operator=(const Dog &other);
		void makeSound(void) const;
};;

#endif