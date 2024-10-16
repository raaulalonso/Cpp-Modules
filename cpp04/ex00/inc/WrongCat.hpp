/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 01:43:04 by raalonso          #+#    #+#             */
/*   Updated: 2024/10/16 18:55:48 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
# define WRONGCAT_H
# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{

	public:
		WrongCat( void );
		WrongCat(const WrongCat &c);
		~WrongCat( void );
		
		WrongCat &operator=(const WrongCat &other);
		void makeSound(void) const;
};

#endif