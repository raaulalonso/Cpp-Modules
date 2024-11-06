/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 08:27:24 by raalonso          #+#    #+#             */
/*   Updated: 2024/11/04 21:25:58 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H
# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string type;

	public: 
		AMateria(std::string const &_type);
		AMateria(void);
		AMateria(const AMateria &a);
		virtual ~AMateria(void);

		AMateria &operator=(const AMateria &other);
		
		std::string const &getType() const; // Returns the materia type

		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target);
};

#endif