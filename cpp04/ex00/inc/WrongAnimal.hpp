/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 01:43:04 by raalonso          #+#    #+#             */
/*   Updated: 2024/10/16 19:24:37 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H
# include <iostream>

class WrongAnimal
{
	protected:
		std::string type;

	public:
		WrongAnimal( void );
		WrongAnimal(const WrongAnimal &a);
		~WrongAnimal( void );
		
		WrongAnimal &operator=(const WrongAnimal &other);
		
		void makeSound(void) const;
		std::string getType(void) const;
		
};

#endif