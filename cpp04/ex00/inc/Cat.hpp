/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 01:43:04 by raalonso          #+#    #+#             */
/*   Updated: 2024/10/16 18:52:17 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H
# include <iostream>
# include "Animal.hpp"

class Cat: public Animal
{

	public:
		Cat( void );
		Cat(const Cat &c);
		~Cat( void );
		
		Cat &operator=(const Cat &other);
		void makeSound(void) const;
};

#endif